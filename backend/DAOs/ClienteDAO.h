#pragma once

#include <vector>
#include "../Models/Cliente.h"

class ClienteDAO {

private:
    std::vector<Cliente> clientes;
    int nextId = 1;

public:
    void create(Cliente cliente);

    Cliente retrieve(int id);

    void update(Cliente cliente);

    void remove(int id);

    std::vector<Cliente> retrieveAll();
};