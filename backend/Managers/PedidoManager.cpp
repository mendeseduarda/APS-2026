#include <PedidoManager.h>
#include <string>

void PedidoManager::iniciaAdicaoProduto() {};

void PedidoManager::informaProduto(
    int idProduto,
    int quantidade
) {};

void PedidoManager::informaAdicaoGas(
    bool adicionaGas
) {};

void PedidoManager::informaModalidade(
    bool modalidade
) {};

void PedidoManager::iniciaFinalizacaoPedido(

) {};

void PedidoManager::insereCupom(
    int CodigoPromocional
) {};

void PedidoManager::confirmaEndereco(
    const Endereco& endereco
) {};

void PedidoManager::informaPagamento(
    const std::string& metodoPagamento
) {};

void PedidoManager::confirmaPedido() {};
