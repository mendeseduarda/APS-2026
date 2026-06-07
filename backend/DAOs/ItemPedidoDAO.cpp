#include "ItemPedidoDAO.h"
#include <stdexcept>

void ItemPedidoDAO::create(ItemPedido itemPedido) {
    itemPedido.setId(nextId++);
    itensPedido.push_back(itemPedido);
}

ItemPedido ItemPedidoDAO::retrieve(int id) {

    for(auto &i : itensPedido) {
        if(i.getId() == id)
            return i;
    }

    throw std::runtime_error("ItemPedido nao encontrado");
}

void ItemPedidoDAO::update(ItemPedido itemPedido) {

    for(auto &i : itensPedido) {

        if(i.getId() == itemPedido.getId()) {
            i = itemPedido;
            return;
        }
    }
}

void ItemPedidoDAO::remove(int id) {

    for(auto it = itensPedido.begin();
        it != itensPedido.end();
        ++it)
    {
        if(it->getId() == id) {
            itensPedido.erase(it);
            return;
        }
    }
}

std::vector<ItemPedido> ItemPedidoDAO::retrieveAll() {
    return itensPedido;
}