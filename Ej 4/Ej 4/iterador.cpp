#include "iterador.h"

iterador:: iterador()
{
    prim = NULL;
    ult = NULL;
    actual = NULL;
}
void iterador :: insertar (duenio * due)
{
    Nodo * nuevo = new Nodo;
    nuevo ->info = due;
    nuevo -> sig = NULL;
    if(prim == NULL)
    {
        prim = nuevo;
        actual = nuevo;
        ult = nuevo;
    }
    else{
        ult->sig = nuevo;
        ult = nuevo;
    }
}
bool iterador :: hayMasDuenios()
{
    return actual!=NULL;
}
duenio * iterador:: proximoDuenio()
{
    duenio * resu = actual->info;
    actual = actual->sig;
    return resu;
}

iterador :: ~iterador()
{
    Nodo * aux = prim;
    while (aux !=NULL)
    {
        prim = prim->sig;
        delete aux;
        aux = prim;
    }
}
