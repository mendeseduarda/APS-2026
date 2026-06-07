#include "DAOManager.h"

ClienteDAO DaoMgr::clienteDAO;
CupomDAO DaoMgr::cupomDAO;
EnderecoDAO DaoMgr::enderecoDAO;
FuncionarioDAO DaoMgr::funcionarioDAO;
ItemPedidoDAO DaoMgr::itemPedidoDAO;
PagamentoDAO DaoMgr::pagamentoDAO;
PedidoDAO DaoMgr::pedidoDAO;
ProdutoDAO DaoMgr::produtoDAO;


ClienteDAO& DaoMgr::getClienteDAO() {
    return clienteDAO;
}

CupomDAO& DaoMgr::getCupomDAO() {
    return cupomDAO;
}

EnderecoDAO& DaoMgr::getEnderecoDAO() {
    return enderecoDAO;
}

FuncionarioDAO& DaoMgr::getFuncionarioDAO() {
    return funcionarioDAO;
}

ItemPedidoDAO& DaoMgr::getItemPedidoDAO() {
    return itemPedidoDAO;
}

PagamentoDAO& DaoMgr::getPagamentoDAO() {
    return pagamentoDAO;
}

PedidoDAO& DaoMgr::getPedidoDAO() {
    return pedidoDAO;
}

ProdutoDAO& DaoMgr::getProdutoDAO() {
    return produtoDAO;
}