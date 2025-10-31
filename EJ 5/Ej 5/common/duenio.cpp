#include "duenio.h"

duenio :: duenio() : nombre()
{
    cedula = 11111111;
    masc = NULL;
}

duenio :: duenio (long int ci, String nom) : nombre(nom)
{
    cedula = ci;
    masc = NULL;
}

duenio :: duenio (const duenio &otro) : nombre(otro.nombre)
{
    cedula = otro.cedula;
    masc = otro.masc;
}

duenio :: ~duenio()
{
    if(masc !=NULL)
        delete masc;
}

long int duenio :: getCedula()
{
    return cedula;
}

String duenio :: getNombre()
{
    return nombre;
}

mascota * duenio :: getMascota()
{
    return masc;
}

void duenio :: setMascota (mascota * m)
{
    masc = m;
}

bool duenio :: tieneMascota()
{
    return (masc!=NULL);
}

duenio duenio :: operator= (const duenio &otro)
{
    if(this != &otro)
    {
        nombre = otro.nombre;
        cedula = otro.cedula;

        masc = otro.masc;
    }
    return (*this);
}
