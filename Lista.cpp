//Laura Liliana Esquibel Prudencio
#include "lista.h"
#include <iostream>

Lista::Lista() : cabeza(nullptr) {}

Lista::~Lista() {
    eliminarLista();
}

void Lista::insertar(int valor) {
    Nodo* nuevo = new Nodo(valor);
    nuevo->establecerSiguiente(cabeza);
    cabeza = nuevo;
}

void Lista::mostrar() const {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        std::cout << actual->obtenerValor() << " -> ";
        actual = actual->obtenerSiguiente();
    }
    std::cout << "NULL" << std::endl;
}

void Lista::eliminarLista() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* siguiente = actual->obtenerSiguiente();
        delete actual;
        actual = siguiente;
    }
    cabeza = nullptr;
}