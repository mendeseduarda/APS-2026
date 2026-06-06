#include <string>
#include "../Models/Endereco.h"

class PedidoManager {
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
            bool modalidade //troca ou nao 
        );

        void iniciaFinalizacaoPedido();

        void insereCupom(
            int CodigoPromocional
        );

        void confirmaEndereco(
            const Endereco& endereco
        );
        
        void informaPagamento(
            const std::string& metodoPagamento
        );

        void confirmaPedido();
};