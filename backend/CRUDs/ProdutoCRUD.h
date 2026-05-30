#pragma once

#include "../models/Produto.h"

class ProdutoCRUD{
public:
    void cadastrarProduto(const Produto& produto);
    Produto consultarProduto(int id);
    void atualizarProduto(const Produto& produto);
    void excluirProduto(int id);
};