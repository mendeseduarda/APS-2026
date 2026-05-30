#pragma once

#include "../models/Funcionario.h"

class FuncionarioCRUD {
public:
    void cadastrarFuncionario(const Funcionario& funcionario);
    Funcionario consultarFuncionario(int id);
    void atualizarFuncionario(const Funcionario& funcionario);
    void excluirFuncionario(int id);
};