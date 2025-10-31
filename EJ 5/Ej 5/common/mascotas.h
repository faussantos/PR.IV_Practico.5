#ifndef MASCOTAS_H_INCLUDED
#define MASCOTAS_H_INCLUDED
#include "mascota.h"

const int B = 10;
class mascotas
{
private:
    struct Nodo {
        mascota * info;
        Nodo * sig;
    };
    Nodo * Hash[B];

    int h(int);
    void crearLista(Nodo * &);
    void destruirLista(Nodo * &);
    bool perteneceLista(Nodo * , int);
    void insertarFront(Nodo * &, mascota *);
    mascota * obtenerEnLista(Nodo *, int);
    int cuantosEnListaPeso(Nodo *, float);

public:
    mascotas();
    ~mascotas();
    bool member (int);
    void insertar (mascota *);
    mascota * Find (int);
    int contarPeso (float);
};


#endif // MASCOTAS_H_INCLUDED
