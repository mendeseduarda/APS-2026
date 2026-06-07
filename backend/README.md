# Backend - Arquitetura OO com Drogon

## 📋 Visão Geral

Este é o backend da aplicação desenvolvido em **C++** utilizando o framework web **Drogon**. A arquitetura segue princípios de Programação Orientada a Objetos (OO) com separação clara de responsabilidades.

---

## 🏗️ Estrutura do Projeto

```
backend/
├── CMakeLists.txt          # Configuração do build
├── config.json             # Configurações da aplicação
├── main.cc                 # Ponto de entrada
├── models/                 # Objetos de domínio
├── controllers/            # Endpoints HTTP
├── DAOs/                   # Acesso a dados
├── Managers/               # Lógica de negócio
├── utils/                  # Utilitários e helpers
├── filters/                # Filtros do Drogon
└── build/                  # Arquivos compilados (gerado)
```

---

## 🔧 Componentes Principais

### **1. Models** (`models/`)
Representam os **objetos do domínio** da aplicação. Armazenam dados com getters e setters.

**Exemplo:**
```cpp
// models/User.h
class User {
private:
    int id;
    std::string name;
    std::string email;
    
public:
    User(int id, const std::string& name, const std::string& email);
    
    int getId() const;
    std::string getName() const;
    std::string getEmail() const;
    
    void setName(const std::string& name);
    void setEmail(const std::string& email);
};
```

**Responsabilidade:** Apenas armazenar dados e fornecer acesso a eles.

---

### **2. DAOs** (`daos/`)
**Data Access Objects** - Responsáveis por **buscar e persistir dados no banco de dados**.

**Exemplo:**
```cpp
// daos/UserDAO.h
class UserDAO {
public:
    User* findById(int id);           // Busca user por ID
    std::vector<User> findAll();       // Busca todos os users
    void save(const User& user);       // Insere ou atualiza
    void delete(int id);               // Deleta user
    
private:
    drogon::orm::DbClientPtr db;       // Conexão com BD
};
```

**Responsabilidade:** Operações no banco de dados (CRUD).

---

### **3. Managers** (`Managers/`)
Contêm a **lógica de negócio** da aplicação. Usam DAOs para acessar dados e aplicam regras.

**Exemplo:**
```cpp
// Managers/UserManager.h
class UserManager {
public:
    User authenticate(const std::string& email, const std::string& password);
    User registerUser(const std::string& name, const std::string& email, const std::string& password);
    std::vector<User> listUsers();
    
private:
    UserDAO userDAO;
    PasswordUtils passwordUtils;  // Hash de senha
};
```

**Responsabilidade:** Validações, regras de negócio, orquestração de DAOs.

---

### **4. Controllers** (`controllers/`)
Endpoints HTTP que **recebem requisições** e retornam respostas. Usam Managers.

**Exemplo:**
```cpp
// controllers/UserController.h
class UserController : public drogon::HttpController<UserController> {
public:
    METHOD_LIST_BEGIN
    ADD_METHOD_TO(UserController::getUser, "/users/{id}", drogon::Get);
    ADD_METHOD_TO(UserController::createUser, "/users", drogon::Post);
    METHOD_LIST_END
    
    void getUser(const drogon::HttpRequestPtr& req, 
                 std::function<void(const drogon::HttpResponsePtr&)>&& callback,
                 int id);
                 
    void createUser(const drogon::HttpRequestPtr& req,
                    std::function<void(const drogon::HttpResponsePtr&)>&& callback);
                    
private:
    UserManager userManager;
};
```

**Responsabilidade:** Parse de requisições, chamadas a Manager, formatação de respostas.

---

- **Models** = Objetos com ID (User, Product) - Dois users com ID 1 são o MESMO


**Uso em Models:**
```cpp
// models/User.h
class User {
private:
    int id;
    std::string name;
    Address address;  // DVO
    Money salary;     // DVO
    
public:
    User(int id, const std::string& name, const Address& addr, const Money& sal);
    
    Address getAddress() const { return address; }
    Money getSalary() const { return salary; }
};
```

**Responsabilidade:** Representar conceitos imutáveis do domínio.

---

### **6. Filters** (`filters/`)
Middleware para processar requisições antes de chegar ao controller (autenticação, validação).

**Exemplo:**
```cpp
// filters/AuthFilter.h
class AuthFilter : public drogon::HttpFilter<AuthFilter> {
public:
    void doFilter(const drogon::HttpRequestPtr& req,
                  drogon::FilterCallback&& fcb,
                  drogon::FilterChainCallback&& fccb) override;
};
```

**Responsabilidade:** Interceptar requisições, validar headers, autenticação, logs.

---

### **7. Utils** (`utils/`)
Funções auxiliares e utilitários reutilizáveis em todo o projeto.

**Exemplos:**
- `PasswordUtils` - Hash e validação de senhas
- `DateUtils` - Manipulação de datas
- `ValidationUtils` - Validações comuns
- `JsonUtils` - Conversão JSON

---

## 📊 Fluxo de Uma Requisição

```
HTTP Request (JSON)
    ↓
[Filters] - Validação, autenticação, headers
[Controller] - Recebe DTO
    ↓
[Manager] - Aplica regras de negócio
    ↓
[DAO] - Acessa banco de dados
    ↓
[Model] - Persiste/Recupera objeto
    ↓
[Manager] - Processa resultado
[Controller] - Converte para JSON
    ↓
HTTP Response (JSON)
```

---
---

## 🚀 Como Adicionar uma Nova Entidade

### 1. Criar Model
```cpp
// models/Product.h
class Product {
private:
    int id;
    std::string name;
    double price;
// ... getters/setters
};
```

### 2. Criar DAO
```cpp
// daos/ProductDAO.h
class ProductDAO {
public:
    Product* findById(int id);
    std::vector<Product> findAll();
    void save(const Product& product);
    void delete(int id);
};
```

### 3. Criar Manager
```cpp
//Manager/ProductManager.h
class ProductManager {
private:
    ProductDAO productDAO;
public:
    Product getProductById(int id);
    // ... outras operações
};
```

### 4. Criar Controller
```cpp
// controllers/ProductController.h
class ProductController : public drogon::HttpController<ProductController> {
private:
    ProductManager productManager;
    // ... endpoints
};
```

---

## 📚 Princípios OO Aplicados

- ✅ **Encapsulamento** - Dados privados, acesso via getters/setters
- ✅ **Separação de Responsabilidades** - Cada classe tem um propósito único
- ✅ **Abstração** - DAOs abstraem detalhes do BD
- ✅ **Reusabilidade** - Manager, Utils reutilizáveis
- ✅ **Dependência Injetada** - Controllers recebem Manager
- ✅ **DVO Pattern** - Valores imutáveis do domínio

---

## 🔨 Build e Execução

```bash
cd backend
mkdir build && cd build
cmake ..
make
./APS-2026  # Executar aplicação
```

---

## 📝 Configuração

Editar `config.json` para:
- Porta do servidor
- Credenciais de banco de dados
- Variáveis de ambiente

---

Desenvolvido utilizando C++ e Drogon
