
#include "listasDeAlumnos.h"
/* ------------------------------------------------ */
// Definición de funciones de la clase Nodo
/* ------------------------------------------------ */

// constructor
Nodo::Nodo(Alumno *alumno)
{
    this->alumno = alumno;
    this->nodoSiguiente = nullptr;
}
// destructor
Nodo::~Nodo()
{
}
/* setters */
void Nodo::establecerAlumno(Alumno *alumno)
{
    this->alumno = alumno;
}
void Nodo::establecerNodoSiguiente(Nodo *nodoSiguiente)
{
    this->nodoSiguiente = nodoSiguiente;
}
/* fin setters */
/* getters */
Nodo *Nodo::obtenerNodoSiguiente()
{
    return this->nodoSiguiente;
}
Alumno *Nodo::obtenerAlumno()
{
    return this->alumno;
}
/* fin getters */

/* ------------------------------------------------ */
// Definición de funciones de la clase lista
/* ------------------------------------------------ */

// constructor
ListaAlumno::ListaAlumno()
{
    this->cabeza = nullptr;
}
// destructor
ListaAlumno::~ListaAlumno()
{
}
/* getters */
Nodo *ListaAlumno::obtenerCabeza()
{
    return this->cabeza;
}
/* fin getters */

bool ListaAlumno::listaEstaVacia()
{
    return (this->cabeza == nullptr);
}
void ListaAlumno::insertarAlInicio(Nodo *nodoNuevo)
{
    // caso la lista esté vacía
    if (this->listaEstaVacia() == true)
    {
        this->cabeza = nodoNuevo;
        return;
    }
    // caso la lista no esté vacía
    nodoNuevo->establecerNodoSiguiente(this->cabeza);
    this->cabeza = nodoNuevo;
}