#pragma once

#include "../DAOs/ClienteDAO.h"
#include "../DAOs/CupomDAO.h"
#include "../DAOs/EnderecoDAO.h"
#include "../DAOs/FuncionarioDAO.h"
#include "../DAOs/ItemPedidoDAO.h"
#include "../DAOs/PagamentoDAO.h"
#include "../DAOs/PedidoDAO.h"
#include "../DAOs/ProdutoDAO.h"

class DaoMgr {

private:

    static ClienteDAO clienteDAO;
    static CupomDAO cupomDAO;
    static EnderecoDAO enderecoDAO;
    static FuncionarioDAO funcionarioDAO;
    static ItemPedidoDAO itemPedidoDAO;
    static PagamentoDAO pagamentoDAO;
    static PedidoDAO pedidoDAO;
    static ProdutoDAO produtoDAO;

public:

    static ClienteDAO& getClienteDAO();
    static CupomDAO& getCupomDAO();
    static EnderecoDAO& getEnderecoDAO();
    static FuncionarioDAO& getFuncionarioDAO();
    static ItemPedidoDAO& getItemPedidoDAO();
    static PagamentoDAO& getPagamentoDAO();
    static PedidoDAO& getPedidoDAO();
    static ProdutoDAO& getProdutoDAO();
};