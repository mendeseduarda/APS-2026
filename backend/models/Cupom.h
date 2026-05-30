#pragma once

class Cupom {
    private:
        int codigo;
        double desconto;
    
    public:
        int getCodigo() const{
            return codigo;
        }

        void setCodigo(int c) {
            this->codigo = c;
        }

        double getDesconto() const {
            return desconto;
        }

        void setDesconto(double d) {
            this->desconto = d;
        }
};