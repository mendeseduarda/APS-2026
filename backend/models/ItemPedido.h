#pragma once

#include "Produto.h"

class ItemPedido {
    private:
        int id; //autoinclemento
        Produto produto;
        int quantidade;
        double precoVenda;
        bool realizaTrocaBotijao;

    public:
    ItemPedido() = default;

        int getId() const {
            return this-> id;
        }

        void setId(int i) {
            this->id = i;
        }

        Produto getProduto() const {
            return this-> produto;
        }

        void setProduto(const Produto& produto) {
            this->produto = produto;
        }

        int getQuantidade() const {
            return this->quantidade;
        }

        void setQuantidade(int quantidade) {
            this->quantidade = quantidade;
        }

        double getPrecoVenda() const {
            return this->precoVenda;
        }

        void setPrecoVenda(double precoVenda) {
            this->precoVenda = precoVenda;
        }

        bool getRealizaTrocaBotijao() const {
            return this->realizaTrocaBotijao;
        }

        void setRealizaTrocaBotijao(bool realizaTrocaBotijao) {
            this->realizaTrocaBotijao = realizaTrocaBotijao;
        }
};