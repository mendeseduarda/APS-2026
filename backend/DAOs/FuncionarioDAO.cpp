#include "FuncionarioDAO.h"
#include <stdexcept>

void FuncionarioDAO::create(Funcionario funcionario) {
    funcionario.setId(nextId++);
    funcionarios.push_back(funcionario);
}

Funcionario FuncionarioDAO::retrieve(int id) {

    for(auto &f : funcionarios) {
        if(f.getId() == id)
            return f;
    }

    throw std::runtime_error("Funcionario nao encontrado");
}

void FuncionarioDAO::update(Funcionario funcionario) {

    for(auto &f : funcionarios) {

        if(f.getId() == funcionario.getId()) {
            f = funcionario;
            return;
        }
    }
}

void FuncionarioDAO::remove(int id) {

    for(auto it = funcionarios.begin();
        it != funcionarios.end();
        ++it)
    {
        if(it->getId() == id) {
            funcionarios.erase(it);
            return;
        }
    }
}

std::vector<Funcionario> FuncionarioDAO::retrieveAll() {
    return funcionarios;
}