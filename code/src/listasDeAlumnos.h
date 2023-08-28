#ifndef LISTAS_ALUMNOS_H
#define LISTAS_ALUMNOS_H

#include "alumno.h"

/* ------------------------------------------------ */
// Declaración de la clase Nodo
/* ------------------------------------------------ */
class Nodo
{
private:
    Alumno *alumno;
    class Nodo *nodoSiguiente;

public:
    Nodo(Alumno *alumno);
    ~Nodo();

    /* setters */
    void establecerAlumno(Alumno *alumno);
    void establecerNodoSiguiente(Nodo *nodoSiguiente);
    /* fin setters */

    /* getters */
    Nodo *obtenerNodoSiguiente();
    Alumno *obtenerAlumno();
    /* fin getters */
};

/* ------------------------------------------------ */
// Declaración de la clase Lista
/* ------------------------------------------------ */
class ListaAlumno
{
private:
    Nodo *cabeza;

public:
    ListaAlumno();
    ~ListaAlumno();
    /* getters */
    Nodo *obtenerCabeza();
    /* fin getters */
    bool listaEstaVacia();
    void insertarAlInicio(Nodo *nodoNuevo);
    void imprimir();
    void insertarOrdenadoCreditos(Nodo *nodoNuevo);
};
#endif