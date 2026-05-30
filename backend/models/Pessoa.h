#pragma once

#include <string>

class Pessoa {
    private:
        int id;
        std::string nome;
        std::string cpf;
        std::string telefone;
    
    public:
    Pessoa() = default;
    
        int getId() const {
            return id;
        }

        void setId(int id) {
            this->id = id;
        }

        std::string getNome() const {
            return nome;
        }

        void setNome(const std::string& nome) {
            this->nome = nome;
        }

        std::string getCpf() const {
            return cpf;
        }

        void setCpf(const std::string& cpf) {
            this->cpf = cpf;
        }

        std::string getTelefone() const {
            return telefone;
        }

        void setTelefone(const std::string& telefone) {
            this->telefone = telefone;
        }

};