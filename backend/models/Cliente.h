#include "Pessoa.h"
#include "Endereco.h"

class Cliente : public Pessoa {
    private:
        Endereco endereco;

    public:
    Cliente() = default;  

        Endereco getEndereco() const {
            return this-> endereco;
        }

        void setEndereco(const Endereco& e) {
            this->endereco = e;
        }
};