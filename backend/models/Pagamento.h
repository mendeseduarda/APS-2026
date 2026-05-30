#pragma once

#include <string>

class Pagamento {
    private:
        std::string formaPagamento;
        bool status;

    public:
    Pagamento() = default; 

        std::string getFormaPagamento() const{
            return formaPagamento;
        }

        void setFormaPagamento(const std::string& forma) {
            this->formaPagamento = forma;
        }

        bool getStatus() const {
            return status;
        }

        void setStatus(bool s) {
            this->status = s;
        }
};