#ifndef MASCOTA_H_INCLUDED
#define MASCOTA_H_INCLUDED
#include "string.h"

class mascota {
private:
    int numero;
    String apodo;
    float peso;

public:
    mascota();
    mascota (int, String, float);
    ~mascota();
    int getNumero();
    String getApodo();
    float getPeso();
};


#endif // MASCOTA_H_INCLUDED
