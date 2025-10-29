#include "mascotas.h"
int mascotas :: h (int num)
{
    return (num % B);
}

void mascotas :: crearLista(Nodo * &L)
{
    L = NULL;
}

void mascotas :: destruirLista(Nodo * &L)
{
    Nodo * aux = L;
    while (aux != NULL)
    {
        L = aux->sig;
        delete aux;
        aux = L;
    }
    L = aux;
}

bool mascotas :: perteneceLista(Nodo * l, int num)
{
    bool existe = false;
    while(!existe && l!=NULL)
    {
        if(l->info->getNumero() == num)
            existe = true;
        else
            l = l->sig;
    }
    return existe;
}

void mascotas :: insertarFront(Nodo * &l, mascota * masc)
{
    Nodo * aux = new Nodo;
    aux -> info = masc;
    aux->sig = l;
    l = aux;
}

mascota * mascotas :: obtenerEnLista(Nodo * l, int num)
{
    while(l->info->getNumero() != num)
    {
        l = l->sig;
    }
    return (l->info);
}

int mascotas:: cuantosEnListaPeso(Nodo * l, float p)
{
    int cont = 0;
    while (l!=NULL)
    {
        if(l->info->getPeso() == p)
            cont++;
        l=l->sig;
    }
    return cont;
}

mascotas :: mascotas()
{
    for(int i = 0; i < B ; i++)
    {
        crearLista(Hash[i]);
    }
}

mascotas :: ~mascotas()
{
    for(int i =0 ; i < B ; i++)
    {
        destruirLista(Hash[i]);
    }
}

bool mascotas :: member (int clave)
{
    int c = h(clave);
    return (perteneceLista(Hash[c],clave));
}

void mascotas :: insertar (mascota * masc)
{
    int c = h(masc->getNumero());
    insertarFront(Hash[c], masc);
}
mascota * mascotas :: Find (int clave)
{
    int c = h(clave);
    return obtenerEnLista(Hash[c],clave);
}
int mascotas :: contarPeso (float p)
{
    int contador = 0;
    for(int i = 0 ; i < B ; i++)
    {
        contador = cuantosEnListaPeso(Hash[i],p) + contador;
    }
    return contador;
}
