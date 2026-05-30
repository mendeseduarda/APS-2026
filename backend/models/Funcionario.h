#pragma once

#include "Pessoa.h"
#include <string>

class Funcionario : public Pessoa {
    private:
        std::string cargo;

    public:
        Funcionario() = default;
        
        std::string getCargo() const {
            return cargo;
        }

        void setCargo(const std::string& cargo) {
            this->cargo = cargo;
        }
};