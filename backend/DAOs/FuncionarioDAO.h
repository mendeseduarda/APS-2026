#pragma once

#include <vector>
#include "../Models/Funcionario.h"

class FuncionarioDAO {

private:
    std::vector<Funcionario> funcionarios;
    int nextId = 1;

public:
    void create(Funcionario funcionario);

    Funcionario retrieve(int id);

    void update(Funcionario funcionario);

    void remove(int id);

    std::vector<Funcionario> retrieveAll();
};