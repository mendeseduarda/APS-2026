#pragma once

#include <vector>
#include "../Models/Pagamento.h"

class PagamentoDAO {

private:
    std::vector<Pagamento> pagamentos;
    int nextId = 1;

public:
    void create(Pagamento pagamento);

    Pagamento retrieve(int id);

    void update(Pagamento pagamento);

    void remove(int id);

    std::vector<Pagamento> retrieveAll();
};