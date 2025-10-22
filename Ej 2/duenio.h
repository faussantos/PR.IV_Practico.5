#ifndef DUENIO_H_INCLUDED
#define DUENIO_H_INCLUDED
#include "mascota.h"

class duenio
{
private:
    long int cedula;
    String nombre;
    mascota * masc;

public:
    duenio ();
    duenio (long int, String);
    duenio (const duenio&);
    ~duenio();
    long int getCedula();
    String getNombre();
    mascota getMascota();
    void setMascota (mascota);
    bool tieneMascota();
    duenio operator= (const duenio &);
};


#endif // DUENIO_H_INCLUDED
