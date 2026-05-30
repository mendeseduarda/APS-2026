#pragma once

#include <string>

class Endereco {
    private:
        std::string cep;
        std::string tipoLogradouro;
        std::string nomeLogradouro;
        int numero;
        std::string bairro;
        std::string complemento;

    public:
        std::string getCep() const {
            return cep;
        }

        void setCep(const std::string& c) {
            this->cep = c;
        }
        
        std::string getTipoLogradouro() const {
            return tipoLogradouro;
        }

        void setTipoLogradouro(const std::string& t) {
            this->tipoLogradouro = t;
        }

        std::string getNomeLogradouro() const {
            return nomeLogradouro;
        }

        void setNomeLogradouro(const std::string& n) {
            this->nomeLogradouro = n;
        }

        int getNumero() const {
            return numero;
        }

        void setNumero(int num) {
            this->numero = num;
        }

        std::string getBairro() const {
            return bairro;
        }

        void setBairro(const std::string& b) {
            this->bairro = b;
        }

        std::string getComplemento() const {
            return complemento;
        }

        void setComplemento(const std::string& c) {
            this->complemento = c;
        }
};