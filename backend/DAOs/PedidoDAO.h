#pragma once

#include <vector>

#include "../Models/Pedido.h"

class PedidoDAO {

private:
    std::vector<Pedido> pedidos;
    int nextId = 1;

public:
    void create(Pedido pedido);

    Pedido retrieve(int id);

    void update(Pedido pedido);

    void remove(int id);

    std::vector<Pedido> retrieveAll();
};