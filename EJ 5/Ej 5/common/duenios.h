#ifndef DUENIOS_H_INCLUDED
#define DUENIOS_H_INCLUDED
#include "duenio.h"
#include "iterador.h"

class duenios
{
private:
    struct Nodo
    {
        duenio * info;
        Nodo * hIzq;
        Nodo * hDer;
    };
    Nodo * ABB;

    void destruirArbol (Nodo * &);
    bool perteneceArbol (Nodo *, long int);
    void insertarEnArbol (Nodo * &, duenio *);
    duenio * obtenerEnArbol (Nodo *, long int);
    void cargarIterador (Nodo *, iterador &);

public:
    duenios();
    ~duenios();
    bool member (long int);
    void Insert(duenio *);
    duenio * Find (long int);
    void listarDuenio (iterador &);
};


#endif // DUENIOS_H_INCLUDED
