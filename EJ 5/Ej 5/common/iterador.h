#ifndef ITERADOR_H_INCLUDED
#define ITERADOR_H_INCLUDED
#include "duenio.h"

class iterador {
private:
    struct Nodo {
        duenio * info;
        Nodo * sig;
    };
    Nodo * prim; Nodo * ult; Nodo * actual;

public:
    iterador();
    void insertar (duenio *);
    bool hayMasDuenios();
    duenio * proximoDuenio();
    ~iterador();
};

#endif // ITERADOR_H_INCLUDED
