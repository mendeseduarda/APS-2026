#include "PagamentoDAO.h"
#include <stdexcept>

void PagamentoDAO::create(Pagamento pagamento) {
    pagamento.setId(nextId++);
    pagamentos.push_back(pagamento);
}

Pagamento PagamentoDAO::retrieve(int id) {

    for(auto &p : pagamentos) {
        if(p.getId() == id)
            return p;
    }

    throw std::runtime_error("Pagamento nao encontrado");
}

void PagamentoDAO::update(Pagamento pagamento) {

    for(auto &p : pagamentos) {

        if(p.getId() == pagamento.getId()) {
            p = pagamento;
            return;
        }
    }
}

void PagamentoDAO::remove(int id) {

    for(auto it = pagamentos.begin();
        it != pagamentos.end();
        ++it)
    {
        if(it->getId() == id) {
            pagamentos.erase(it);
            return;
        }
    }
}

std::vector<Pagamento> PagamentoDAO::retrieveAll() {
    return pagamentos;
}