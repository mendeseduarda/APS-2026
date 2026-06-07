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
        int codigo;
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
            return this-> id;
        }

        void setId(int id) {
            this->id = id;
        }

        int getCodigo() const {
            return this-> codigo;
        }   
        void setCodigo(int codigo) {
            this->codigo = codigo;
        }
        Cliente getCliente() const {
            return this-> cliente;
        }

        void setCliente(const Cliente& cliente) {
            this->cliente = cliente;
        }

        Funcionario getFuncionario() const {
            return this-> funcionario;
        }

        void setFuncionario(const Funcionario& funcionario) {
            this->funcionario = funcionario;
        }

        std::vector<ItemPedido> getItens() const {
            return this->itens;
        }

        void setItens(const std::vector<ItemPedido>& itens) {
            this->itens = itens;
        }

        Endereco getEndereco() const {
            return this->endereco;
        }

        void setEndereco(const Endereco& endereco) {
            this->endereco = endereco;
        }

        Pagamento getPagamento() const {
            return this->pagamento;
        }

        void setPagamento(const Pagamento& pagamento) {
            this->pagamento = pagamento;
        }

        std::time_t getDataHoraInicial() const {
            return this->dataHoraInicial;
        }

        void setDataHoraInicial(std::time_t dataHoraInicial) {
            this->dataHoraInicial = dataHoraInicial;
        }

        std::time_t getDataHoraFinal() const {
            return this->dataHoraFinal;
        }

        void setDataHoraFinal(std::time_t dataHoraFinal) {
            this->dataHoraFinal = dataHoraFinal;
        }

        double getValorTotal() const {
            return this->valorTotal;
        }

        void setValorTotal(double valorTotal) {
            this->valorTotal = valorTotal;
        }

        std::string getStatus() const {
            return this->status;
        }

        void setStatus(const std::string& status) {
            this->status = status;
        }

};