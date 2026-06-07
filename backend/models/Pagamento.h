#pragma once

#include <string>

class Pagamento {
    private:
        int id; //autoinclemento
        std::string formaPagamento;
        bool status;

    public:
    Pagamento() = default; 

        int getId() const {
            return this-> id;
        }

        void setId(int i) {
            this->id = i;
        }

        std::string getFormaPagamento() const{
            return this-> formaPagamento;
        }

        void setFormaPagamento(const std::string& forma) {
            this->formaPagamento = forma;
        }

        bool getStatus() const {
            return this-> status;
        }

        void setStatus(bool s) {
            this->status = s;
        }
};