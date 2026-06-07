#pragma once

#include "Pessoa.h"
#include <string>

class Funcionario : public Pessoa {
    private:
        int id; //autoinclemento
        std::string cargo;

    public:

        Funcionario() = default;
        
        int getId() const {
            return this-> id;
        }

        void setId(int i) {
            this-> id = i;
        }

        std::string getCargo() const {
            return this-> cargo;
        }

        void setCargo(const std::string& cargo) {
            this->cargo = cargo;
        }
};