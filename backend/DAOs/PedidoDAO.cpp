#include "PedidoDAO.h"
#include <stdexcept>

void PedidoDAO::create(Pedido pedido) {
    pedido.setId(nextId++);
    pedidos.push_back(pedido);
}

Pedido PedidoDAO::retrieve(int id) {

    for(auto &p : pedidos) {
        if(p.getId() == id)
            return p;
    }

    throw std::runtime_error("Pedido nao encontrado");
}

void PedidoDAO::update(Pedido pedido) {

    for(auto &p : pedidos) {

        if(p.getId() == pedido.getId()) {
            p = pedido;
            return;
        }
    }
}

void PedidoDAO::remove(int id) {

    for(auto it = pedidos.begin();
        it != pedidos.end();
        ++it)
    {
        if(it->getId() == id) {
            pedidos.erase(it);
            return;
        }
    }
}

std::vector<Pedido> PedidoDAO::retrieveAll() {
    return pedidos;
}