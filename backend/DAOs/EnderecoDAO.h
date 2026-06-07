#pragma once

#include <vector>
#include "../Models/Endereco.h"

class EnderecoDAO {

private:
    std::vector<Endereco> enderecos;
    int nextId = 1;

public:
    void create(Endereco endereco);

    Endereco retrieve(int id);

    void update(Endereco endereco);

    void remove(int id);

    std::vector<Endereco> retrieveAll();
};