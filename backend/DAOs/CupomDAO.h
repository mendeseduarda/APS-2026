#pragma once

#include <vector>
#include "../Models/Cupom.h"

class CupomDAO {

private:
    std::vector<Cupom> cupons;
    int nextId = 1;

public:
    void create(Cupom cupom);

    Cupom retrieve(int id);

    void update(Cupom cupom);

    void remove(int id);

    std::vector<Cupom> retrieveAll();
};