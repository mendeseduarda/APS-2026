#include "ClienteDAO.h"
#include <stdexcept>

void ClienteDAO::create(Cliente cliente) {
    cliente.setId(nextId++);
    clientes.push_back(cliente);
}

Cliente ClienteDAO::retrieve(int id) {

    for(auto &c : clientes) {
        if(c.getId() == id)
            return c;
    }

    throw std::runtime_error("Cliente nao encontrado");
}

void ClienteDAO::update(Cliente cliente) {

    for(auto &c : clientes) {

        if(c.getId() == cliente.getId()) {
            c = cliente;
            return;
        }
    }
}

void ClienteDAO::remove(int id) {

    for(auto it = clientes.begin();
        it != clientes.end();
        ++it)
    {
        if(it->getId() == id) {
            clientes.erase(it);
            return;
        }
    }
}

std::vector<Cliente> ClienteDAO::retrieveAll() {
    return clientes;
}