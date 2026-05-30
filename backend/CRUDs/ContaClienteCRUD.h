#pragma once

#include "../models/ContaCliente.h"

class ContaClienteCRUD {
public:
    void cadastrarContaCliente(const ContaCliente& contaCliente);
    ContaCliente consultarContaCliente(int id);
    void atualizarContaCliente(const ContaCliente& contaCliente);
    void excluirContaCliente(int id);
};