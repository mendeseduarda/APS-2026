#pragma once

class Cupom {
    private:
        int id; //autoinclemento
        int codigo;
        double desconto;
    
    public:
        int getId() const {
            return this-> id;
        }

        void setId(int i) {
            this->id = i;
        }

        int getCodigo() const{
            return this-> codigo;
        }

        void setCodigo(int c) {
            this->codigo = c;
        }

        double getDesconto() const {
            return this-> desconto;
        }

        void setDesconto(double d) {
            this->desconto = d;
        }
};