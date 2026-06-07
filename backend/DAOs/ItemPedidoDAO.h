#pragma once

#include <vector>
#include "../Models/ItemPedido.h"

class ItemPedidoDAO {

private:
    std::vector<ItemPedido> itensPedido;
    int nextId = 1;

public:
    void create(ItemPedido itemPedido);

    ItemPedido retrieve(int id);

    void update(ItemPedido itemPedido);

    void remove(int id);

    std::vector<ItemPedido> retrieveAll();
};