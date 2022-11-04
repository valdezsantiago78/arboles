#include "arbol.h"
#include <stdio.h>

struct nodo_arbolb
{
    int dato;
    arbolb izq;
    arbolb der; 
};

arbolb crear()
{
    return NULL;
};

arbolb insertar(int x, arbolb subiz, arbolb subde)
{
// Inserta x como raiz, deja a subiz como sub arbol izquierdo y
// a subde como subarbol derecho.
    
    arbolb aux = new(nodo_arbolb);
    aux->dato = x;
    aux->izq = subiz;
    aux->der = subde;

    return aux;
};

int raiz(arbolb ab)
{
// Retorna la raiz del arbol.
// Pre: ab no vacio.
   return ab->dato;
};

arbolb subiz(arbolb ab)
{
    return ab->izq;
};

arbolb subde(arbolb ab)
{
    return ab->der;
};

bool vacio(arbolb ab)
{
    return (ab == NULL);
};

