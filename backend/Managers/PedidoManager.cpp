#include "PedidoManager.h"

#include "DAOManager.h"

#include "../Models/Pedido.h"
#include "../Models/Produto.h"
#include "../Models/ItemPedido.h"
#include "../Models/Cupom.h"
#include "../Models/Pagamento.h"

void PedidoManager::iniciaAdicaoProduto() {

    pedidoAtual = Pedido();
}

void PedidoManager::informaProduto(
    int idProduto,
    int quantidade
) {

    ProdutoDAO& produtoDAO =
        DaoMgr::getProdutoDAO();

    Produto produto =
        produtoDAO.retrieve(idProduto);

    ItemPedido item;

    item.setProduto(produto);
    item.setQuantidade(quantidade);

    pedidoAtual.adicionarItem(item);
}

void PedidoManager::informaAdicaoGas(
    bool adicionaGas
) {

    pedidoAtual.setAdicionaGas(adicionaGas);
}

void PedidoManager::informaModalidade(
    bool trocaCasco
) {

    pedidoAtual.setTrocaCasco(trocaCasco);
}

void PedidoManager::iniciaFinalizacaoPedido() {

    pedidoAtual.calcularValorTotal();
}

void PedidoManager::insereCupom(
    int codigoCupom
) {

    CupomDAO& cupomDAO =
        DaoMgr::getCupomDAO();

    Cupom cupom =
        cupomDAO.retrieve(codigoCupom);

    pedidoAtual.setCupom(cupom);
}

void PedidoManager::confirmaEndereco(
    const Endereco& endereco
) {

    pedidoAtual.setEndereco(endereco);
}

void PedidoManager::informaPagamento(
    int idPagamento
) {

    PagamentoDAO& pagamentoDAO =
        DaoMgr::getPagamentoDAO();

    Pagamento pagamento =
        pagamentoDAO.retrieve(idPagamento);

    pedidoAtual.setPagamento(pagamento);
}

void PedidoManager::confirmaPedido() {

    PedidoDAO& pedidoDAO =
        DaoMgr::getPedidoDAO();

    pedidoDAO.create(pedidoAtual);
}