#pragma once

#include <string>

class ContaFuncionario {
private:
    int id;
    std::string email;
    std::string senha;

public:

    int getId() const {
        return id;
    }

    void setId(int id) {
        this->id = id;
    }

    std::string getEmail() const {
        return email;
    }

    void setEmail(const std::string& email) {
        this->email = email;
    }

    std::string getSenha() const {
        return senha;
    }

    void setSenha(const std::string& senha) {
        this->senha = senha;
    }
};