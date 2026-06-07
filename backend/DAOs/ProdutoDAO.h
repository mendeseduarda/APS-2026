#pragma once

#include <vector>
#include "../Models/Produto.h"

class ProdutoDAO {

private:
    std::vector<Produto> produtos;
    int nextId = 1;

public:
    void create(Produto produto);

    Produto retrieve(int id);

    void update(Produto produto);

    void remove(int id);

    std::vector<Produto> retrieveAll();
};