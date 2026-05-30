#pragma once

#include "Cliente.h"
#include "Funcionario.h"
#include "ItemPedido.h"
#include "Endereco.h"
#include "Pagamento.h"

#include <vector>
#include <ctime>
#include <string>

class Pedido {
    private:
        int id;
        Cliente cliente;
        Funcionario funcionario;
        std::vector<ItemPedido> itens;
        Endereco endereco;
        Pagamento pagamento;
        std::time_t dataHoraInicial;
        std::time_t dataHoraFinal;
        double valorTotal;
        std::string status;
    
    public:
        Pedido() = default; 

        int getId() const {
            return id;
        }

        void setId(int id) {
            this->id = id;
        }

        Cliente getCliente() const {
            return cliente;
        }

        void setCliente(const Cliente& cliente) {
            this->cliente = cliente;
        }

        Funcionario getFuncionario() const {
            return funcionario;
        }

        void setFuncionario(const Funcionario& funcionario) {
            this->funcionario = funcionario;
        }

        std::vector<ItemPedido> getItens() const {
            return itens;
        }

        void setItens(const std::vector<ItemPedido>& itens) {
            this->itens = itens;
        }

        Endereco getEndereco() const {
            return endereco;
        }

        void setEndereco(const Endereco& endereco) {
            this->endereco = endereco;
        }

        Pagamento getPagamento() const {
            return pagamento;
        }

        void setPagamento(const Pagamento& pagamento) {
            this->pagamento = pagamento;
        }

        std::time_t getDataHoraInicial() const {
            return dataHoraInicial;
        }

        void setDataHoraInicial(std::time_t dataHoraInicial) {
            this->dataHoraInicial = dataHoraInicial;
        }

        std::time_t getDataHoraFinal() const {
            return dataHoraFinal;
        }

        void setDataHoraFinal(std::time_t dataHoraFinal) {
            this->dataHoraFinal = dataHoraFinal;
        }

        double getValorTotal() const {
            return valorTotal;
        }

        void setValorTotal(double valorTotal) {
            this->valorTotal = valorTotal;
        }

        std::string getStatus() const {
            return status;
        }

        void setStatus(const std::string& status) {
            this->status = status;
        }

};