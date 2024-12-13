//Laura Liliana Esquibel Prudencio
#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

class Lista {
private:
    Nodo* cabeza;

public:
    Lista();
    ~Lista();

    void insertar(int valor);
    void mostrar() const;
    void eliminarLista();
};

#endif