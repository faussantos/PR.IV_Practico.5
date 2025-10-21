#ifndef DUEÒO_H_INCLUDED
#define DUEÒO_H_INCLUDED
#include "mascota.h"

class dueÒo {
private:
    long int cedula;
    String nombre;
    mascota masc;

public:
    dueÒo (long int, String);
    long int getCedula ();
    String getNombre();
    mascota getMascota;
    void setMascota(Mascota);
    bool tieneMascota();
};


#endif // DUEÒO_H_INCLUDED
