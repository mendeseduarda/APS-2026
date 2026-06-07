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
            return this-> id;
        }

        void setId(int id) {
            this->id = id;
        }

        std::string getNome() const {
            return this-> nome;
        }

        void setNome(const std::string& nome) {
            this->nome = nome;
        }

        std::string getCpf() const {
            return this-> cpf;
        }

        void setCpf(const std::string& cpf) {
            this->cpf = cpf;
        }

        std::string getTelefone() const {
            return this-> telefone;
        }

        void setTelefone(const std::string& telefone) {
            this->telefone = telefone;
        }

};