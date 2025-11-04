#ifndef FACHADA_H_INCLUDED
#define FACHADA_H_INCLUDED
#include "tipoError.h"
#include "duenios.h"
#include "mascotas.h"

class CapaLogica
{
private:
    mascotas Mascotas;
    duenios Duenios;

public:
    CapaLogica();
    ~CapaLogica();
    void altaDuenio (duenio * , tipoError&);
    void asignarMascota (long int, mascota *, tipoError &);
    void listarDuenios (iterador &);
    int contarPeso(float);
};


#endif // FACHADA_H_INCLUDED
