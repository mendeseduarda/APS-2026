#pragma once

#include "Produto.h"

class ItemPedido {
    private:
        Produto produto;
        int quantidade;
        double precoVenda;
        bool realizaTrocaBotijao;

    public:
    ItemPedido() = default;

        Produto getProduto() const {
            return produto;
        }

        void setProduto(const Produto& produto) {
            this->produto = produto;
        }

        int getQuantidade() const {
            return quantidade;
        }

        void setQuantidade(int quantidade) {
            this->quantidade = quantidade;
        }

        double getPrecoVenda() const {
            return precoVenda;
        }

        void setPrecoVenda(double precoVenda) {
            this->precoVenda = precoVenda;
        }

        bool getRealizaTrocaBotijao() const {
            return realizaTrocaBotijao;
        }

        void setRealizaTrocaBotijao(bool realizaTrocaBotijao) {
            this->realizaTrocaBotijao = realizaTrocaBotijao;
        }
};