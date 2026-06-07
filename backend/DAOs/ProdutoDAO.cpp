#include "ProdutoDAO.h"
#include <stdexcept>

void ProdutoDAO::create(Produto produto) {
    produto.setId(nextId++);
    produtos.push_back(produto);
}

Produto ProdutoDAO::retrieve(int id) {

    for(auto &p : produtos) {
        if(p.getId() == id)
            return p;
    }

    throw std::runtime_error("Produto nao encontrado");
}

void ProdutoDAO::update(Produto produto) {

    for(auto &p : produtos) {

        if(p.getId() == produto.getId()) {
            p = produto;
            return;
        }
    }
}

void ProdutoDAO::remove(int id) {

    for(auto it = produtos.begin();
        it != produtos.end();
        ++it)
    {
        if(it->getId() == id) {
            produtos.erase(it);
            return;
        }
    }
}

std::vector<Produto> ProdutoDAO::retrieveAll() {
    return produtos;
}