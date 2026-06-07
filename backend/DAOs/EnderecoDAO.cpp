#include "EnderecoDAO.h"
#include <stdexcept>

void EnderecoDAO::create(Endereco endereco) {
    endereco.setId(nextId++);
    enderecos.push_back(endereco);
}

Endereco EnderecoDAO::retrieve(int id) {

    for(auto &e : enderecos) {
        if(e.getId() == id)
            return e;
    }

    throw std::runtime_error("Endereco nao encontrado");
}

void EnderecoDAO::update(Endereco endereco) {

    for(auto &e : enderecos) {

        if(e.getId() == endereco.getId()) {
            e = endereco;
            return;
        }
    }
}

void EnderecoDAO::remove(int id) {

    for(auto it = enderecos.begin();
        it != enderecos.end();
        ++it)
    {
        if(it->getId() == id) {
            enderecos.erase(it);
            return;
        }
    }
}

std::vector<Endereco> EnderecoDAO::retrieveAll() {
    return enderecos;
}