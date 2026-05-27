# APS-2026 - J.B.Mendes Delivery

> Repositório para o projeto da disciplina de **Análise e Desenvolvimento de Software 2026/1** da UTFPR

---

## 👥 Equipe

- **Maria Eduarda Mendes:** [github.com/mendeseduarda](https://github.com/mendeseduarda)
- **Isabela Kawashima:** [github.com/isakawashima-lab](https://github.com/isakawashima-lab)
- **Izabela Sanitá:** [github.com/izabelasanita](https://github.com/izabelasanita)


---

## 📦 Sobre o Projeto

**J.B.Mendes Delivery** é um sistema de e-commerce desenvolvido para um mercado de uma cidade pequena, permitindo:

- 📱 Catálogo de produtos
- 🛒 Carrinho de compras
- 💳 Processamento de pedidos
- 🚚 Gestão de entregas
- 👤 Autenticação de usuários

---

## 🏗️ Arquitetura do Projeto

O projeto segue uma arquitetura em **camadas** com separação entre frontend e backend:

### **Backend** 🔧
Desenvolvido em **C++** com framework **Drogon**  
Responsável por:
- API REST para operações de dados
- Lógica de negócio
- Acesso ao banco de dados
- Autenticação e autorização

📖 **[Ver documentação completa do Backend](backend/README.md)**

**Estrutura OO:**
- **Models** - Objetos de domínio
- **DAOs** - Acesso a dados
- **Services** - Lógica de negócio
- **Controllers** - Endpoints HTTP
- **DVOs** - Valores imutáveis

---

### **Frontend** 🎨
Desenvolvido em tecnologia moderna  
Responsável por:
- Interface com usuário
- Comunicação com API
- Renderização de componentes
- Gerenciamento de estado

📖 **[Ver documentação do Frontend](frontend/README.md)** *(em desenvolvimento)*

---

## 📚 Fundamentação Teórica - Craig Larman

Este projeto é fundamentado nos princípios de **Análise e Projeto Orientado a Objetos** de **Craig Larman**

---

## 🚀 Quick Start

Para começar a trabalhar no projeto, consulte o guia completo:

📖 **[Guia de Configuração e Git](GETTING_STARTED.md)**

---

## 📁 Estrutura Geral

```
APS-2026/
├── README.md                    # Este arquivo
├── GETTING_STARTED.md           # Guia de setup e git
├── .gitignore                   # Arquivos ignorados pelo git
├── backend/                     # API em C++ + Drogon
│   ├── README.md               # Documentação do backend
│   ├── CMakeLists.txt
│   ├── config.json
│   ├── main.cc
│   ├── models/
│   ├── controllers/
│   ├── DAOs/
│   ├── Services/
│   ├── DVOs/
│   ├── utils/
│   └── filters/
└── frontend/                    # Interface do usuário
    └── README.md               # Documentação do frontend
```

---

## 📖 Documentação

- [Backend - Arquitetura OO com Drogon](backend/README.md)
- [Frontend - Interface do Usuário](frontend/README.md)
- [Guia de Configuração e Git](GETTING_STARTED.md)

---

## 🔗 Referências

- **Craig Larman** - "Applying UML and Patterns: An Introduction to Object-Oriented Analysis and Design"
- **Drogon Framework** - https://github.com/an-tao/drogon

