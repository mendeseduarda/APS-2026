#pragma once

#include <string>

#include "../Models/Pedido.h"
#include "../Models/Endereco.h"

class PedidoManager {

private:
    Pedido pedidoAtual;

public:

    void iniciaAdicaoProduto();

    void informaProduto(
        int idProduto,
        int quantidade
    );

    void informaAdicaoGas(
        bool adicionaGas
    );

    void informaModalidade(
        bool trocaCasco
    );

    void iniciaFinalizacaoPedido();

    void insereCupom(
        int codigoCupom
    );

    void confirmaEndereco(
        const Endereco& endereco
    );

    void informaPagamento(
        int idPagamento
    );

    void confirmaPedido();
};