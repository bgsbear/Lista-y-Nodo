//Laura Liliana Esquibel Prudencio
#include "Nodo.h"

Nodo::Nodo(int valor) : valor(valor), siguiente(nullptr) {}

int Nodo::obtenerValor() const {
    return valor;
}

Nodo* Nodo::obtenerSiguiente() const {
    return siguiente;
}

void Nodo::establecerSiguiente(Nodo* siguiente) {
    this->siguiente = siguiente;
}