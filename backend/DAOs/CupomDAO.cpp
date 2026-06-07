#include "CupomDAO.h"
#include <stdexcept>

void CupomDAO::create(Cupom cupom) {
    cupom.setId(nextId++);
    cupons.push_back(cupom);
}

Cupom CupomDAO::retrieve(int id) {

    for(auto &c : cupons) {
        if(c.getId() == id)
            return c;
    }

    throw std::runtime_error("Cupom nao encontrado");
}

void CupomDAO::update(Cupom cupom) {

    for(auto &c : cupons) {

        if(c.getId() == cupom.getId()) {
            c = cupom;
            return;
        }
    }
}

void CupomDAO::remove(int id) {

    for(auto it = cupons.begin();
        it != cupons.end();
        ++it)
    {
        if(it->getId() == id) {
            cupons.erase(it);
            return;
        }
    }
}

std::vector<Cupom> CupomDAO::retrieveAll() {
    return cupons;
}