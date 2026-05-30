#pragma once

#include "../models/Cupom.h"

class CupomCRUD {
public:
    void cadastrarCupom(const Cupom& cupom);
    Cupom consultarCupom(int id);
    void atualizarCupom(const Cupom& cupom);
    void excluirCupom(int id);
};