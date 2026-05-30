#pragma once

#include "../models/ContaFuncionario.h"

class ContaFuncionarioCRUD {
public:
    void cadastrarContaFuncionario(const ContaFuncionario& contaFuncionario);
    ContaFuncionario consultarContaFuncionario(int id);
    void atualizarContaFuncionario(const ContaFuncionario& contaFuncionario);
    void excluirContaFuncionario(int id);
};