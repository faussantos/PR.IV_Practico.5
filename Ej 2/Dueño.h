#ifndef DUE�O_H_INCLUDED
#define DUE�O_H_INCLUDED
#include "mascota.h"

class due�o {
private:
    long int cedula;
    String nombre;
    mascota masc;

public:
    due�o (long int, String);
    long int getCedula ();
    String getNombre();
    mascota getMascota;
    void setMascota(Mascota);
    bool tieneMascota();
};


#endif // DUE�O_H_INCLUDED
