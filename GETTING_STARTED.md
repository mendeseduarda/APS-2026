# 🚀 Guia de Configuração e Git

Bem-vindo! Este guia vai te ajudar a clonar o repositório e começar a trabalhar no projeto.

---
## 🔐 1. Configurando Git pela Primeira Vez

Se é a primeira vez usando git no seu PC:

```bash
# Configure seu nome
git config --global user.name "Seu Nome"

# Configure seu email (use o do GitHub!)
git config --global user.email "seu@email.com"

# Veja a configuração
git config --global --list
```

---

## 📥 2. Clonando o Repositório

### Clone assim:

```bash
# Via HTTPS (recomendado para iniciantes)
git clone https://github.com/seu-usuario/APS-2026.git

# Ou via SSH (se já tem chave SSH configurada)
git clone git@github.com:seu-usuario/APS-2026.git

# Entre na pasta do projeto
cd APS-2026
```

### Já tem o repositório? Atualize:

```bash
git pull origin main
```

---

## 🌿 3. Branches e Workflow Git

### Entendendo branches

- **main** = Código em produção (não mexer direto!)
- **develop** = Código em desenvolvimento
- **feature/*** = Suas novas funcionalidades

### Criando sua branch de funcionalidade

```bash
# Atualize primeiro
git pull origin develop

# Crie uma branch com seu nome/funcionalidade
git checkout -b feature/seu-nome-funcionalidade

# Exemplo:
git checkout -b feature/maria-login-usuario
git checkout -b feature/joao-carrinho-compras
```

### Nomeação de branches

Use este padrão:
- `feature/nome-da-funcionalidade` - Nova funcionalidade
- `bugfix/nome-do-bug` - Correção de bug
- `docs/nome-documentacao` - Documentação

---

## 💾 4. Salvando seu Trabalho (Commit)

### Passo a passo:

```bash
# 1. Ver o que você mudou
git status

# 2. Adicionar arquivos modificados
git add .                    # Adicionar tudo
git add arquivo.cpp          # Ou arquivo específico

# 3. Criar um commit com mensagem clara
git commit -m "Descrição clara do que você fez"
```

### Nomenclatura de commits

Use prefixos para deixar o histórico mais organizado:

- `feat:` para nova funcionalidade
- `fix:` para correção de bug
- `docs:` para documentação
- `chore:` para tarefas de organização/manutenção
- `refactor:` para refatoração de código sem mudar a regra de negócio
- `test:` para testes

### Exemplos

```bash
git commit -m "feat: adiciona cadastro de produtos"
git commit -m "fix: corrige erro no cálculo do frete"
git commit -m "docs: atualiza README do backend"
git commit -m "chore: cria estrutura inicial do projeto"
git commit -m "refactor: organiza classes do backend"
```

### Boas mensagens de commit:

```bash
# ✅ Bom
git commit -m "Adiciona autenticação de usuários no login"
git commit -m "Corrige bug no cálculo de frete"
git commit -m "Refatora UserDAO para melhor performance"

# ❌ Ruim
git commit -m "mudanças"
git commit -m "fix"
git commit -m "alterações varias"
```

---

## 📤 5. Enviando para o Repositório (Push)

### Envie sua branch:

```bash
# Primera vez enviando essa branch
git push -u origin feature/seu-nome-funcionalidade

# Próximas vezes
git push
```

---


## 🔄 6. Atualizar sua Branch com Código Novo

Se o `develop` foi atualizado e você quer sincronizar:

```bash
# Vá para develop
git checkout develop

# Puxe as atualizações
git pull origin develop

# Volte para sua branch
git checkout feature/seu-nome-funcionalidade

# Sincronize com develop (merge)
git merge develop
```

---

## ⚠️ 7. Resolvendo Conflitos

Se há conflitos ao fazer merge:

```bash
# Git vai mostrar os conflitos:
<<<<<<<< HEAD
seu código
========
código do outro
>>>>>>>>
```

**Resolva:**
1. Escolha qual código manter 
2. Delete as linhas `<<<<`, `====`, `>>>>`
3. Faça commit:
```bash
git add .
git commit -m "Resolve conflito no merge com develop"
git push
```

---

## 📋 8. Comandos Úteis do Git

```bash
# Ver histórico de commits
git log --oneline

# Ver branches locais
git branch

# Ver branches remotas
git branch -a

# Deletar branch local
git branch -d feature/seu-nome-funcionalidade

# Ver mudanças antes de commit
git diff

# Desfazer último commit (se não fez push ainda)
git reset HEAD~1

# Ver status atual
git status

# Stash (guardar mudanças temporariamente)
git stash
git stash pop  # Recuperar depois
```

---


## 🚨 9. Regras Importantes

✅ **SEMPRE faça:**
- Pull antes de começar a trabalhar
- Commits com mensagens claras

❌ **NUNCA faça:**
- Commit direto em `main`.
- Force push (`git push -f`) sem avisar.
- Adicionar arquivos de build/node_modules (verificar `.gitignore`)

---

### Perdi meu trabalho! Como recupero?
```bash
git reflog  # Ver histórico de tudo
git checkout <commit-id>  # Voltar para um commit específico
```

### Quero ver o que mudou em um arquivo?
```bash
git diff arquivo.cpp
git log arquivo.cpp  # Ver histórico do arquivo
```

### Como faço backup da minha branch?
```bash
git push origin feature/seu-nome-funcionalidade
# Agora está segura no servidor!
```

### Cometi um commit errado. Como desfaço?
```bash
# Se não fez push ainda
git reset HEAD~1

# Se já fez push
git revert HEAD  # Cria um novo commit "desfazendo"
```

