#pragma once

#include "../models/Cliente.h"

class ClienteCRUD {
public:
    void cadastrarCliente(const Cliente& cliente);
    Cliente consultarCliente(int id);
    void atualizarCliente(const Cliente& cliente);
    void excluirCliente(int id);
};