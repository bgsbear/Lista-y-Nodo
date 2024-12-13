//Laura Liliana Esquibel Prudencio
#ifndef NODO_H
#define NODO_H

class Nodo {
private:
    int valor;
    Nodo* siguiente;

public:
    Nodo(int valor);

    int obtenerValor() const;
    Nodo* obtenerSiguiente() const;
    void establecerSiguiente(Nodo* siguiente);
};

#endif