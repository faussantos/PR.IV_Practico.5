#include "duenios.h"

void duenios :: destruirArbol(Nodo * &a)
{
    if(a!=NULL)
    {
        destruirArbol(a->hIzq);
        destruirArbol(a->hDer);
        delete a->info;
        delete a;
        a = NULL;
    }
}

bool duenios :: perteneceArbol (Nodo * a, long int ci)
{
    bool encontre = false;
    while (!encontre && a != NULL)
    {
        long int cedula = a->info ->getCedula();
        if( cedula== ci)
            encontre = true;
        else
        {
            if(ci < cedula)
                a = a->hIzq;
            else
                a = a->hDer;
        }
    }
    return encontre;
}

void duenios :: insertarEnArbol (Nodo * &a, duenio *d)
{
    if(a==NULL)
    {
        a = new Nodo;
        a -> info = d;
        a ->hIzq = NULL;
        a -> hDer = NULL;
    }
    else{
        if(d -> getCedula() < a->info->getCedula())
            insertarEnArbol(a->hIzq,d);
        else
            insertarEnArbol(a->hDer,d);
    }
}

duenio * duenios :: obtenerEnArbol (Nodo * a, long int ci)
{
    while (a->info->getCedula() != ci)
    {
        if(ci < a->info->getCedula())
            a = a -> hIzq;
        else
            a = a->hDer;
    }
    return a->info;
}

void duenios :: cargarIterador (Nodo * a, iterador &iter)
{
    if(a!=NULL)
    {
        cargarIterador(a->hIzq,iter);
        iter.insertar(a->info);
        cargarIterador(a->hDer, iter);
    }
}

duenios :: duenios ()
{
    ABB = NULL;
}

duenios :: ~duenios()
{
    destruirArbol(ABB);
}

bool duenios :: member (long int ced)
{
    return perteneceArbol(ABB, ced);
}

void duenios :: Insert(duenio * d)
{
    insertarEnArbol(ABB,d);
}

duenio * duenios :: Find (long int ced)
{
    return obtenerEnArbol(ABB, ced);
}

void duenios :: listarDuenio (iterador &iter)
{
    cargarIterador(ABB, iter);

}
