#pragma once

#include <string>

class Produto {
    private:
        int id;
        std::string nome;
        double preco;
        int estoque;

    public:
    Produto() = default; 
    
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

        double getPreco() const {
            return preco;
        }

        void setPreco(double preco) {
            this->preco = preco;
        }

        int getEstoque() const {
            return estoque;
        }

        void setEstoque(int estoque) {
            this->estoque = estoque;
        }

};