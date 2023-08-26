
#include "listasDeAlumnos.h"
/* ------------------------------------------------ */
// Definición de funciones de la clase Nodo
/* ------------------------------------------------ */

// constructor
Nodo::Nodo(Alumno *alumno)
{
    this->alumno = alumno;
    this->nodoSiguiente = nullptr;
    cout << "Se ha creado un nodo en la lista de alumnos en " << this << endl;
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
    cout << "Se ha creado una lista en la direccion " << this << endl;
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
void ListaAlumno::imprimir()
{
    Nodo *nodoActual = this->cabeza;

    cout << "Nombre\t\t\tCreditos Aprobados\tSemestre Equivalente" << endl;
    while (nodoActual != nullptr)
    {
        Alumno *alumnoActual = nodoActual->obtenerAlumno();

        cout << alumnoActual->obtenerNombreCompleto() << "\t\t";
        cout << alumnoActual->obtenerCreditosAprovados() << "\t\t\t";
        cout << alumnoActual->obtenerSemestreEquivalente() << endl;

        nodoActual = nodoActual->obtenerNodoSiguiente();
    }
}
// función de apoyo para el recorrido y posterior insersecion
bool condicionInsercion(Nodo *nodoActual, Nodo *nodoNuevo)
{
    return (nodoActual != nullptr && (nodoNuevo->obtenerAlumno()->obtenerCreditosAprovados() < nodoActual->obtenerAlumno()->obtenerCreditosAprovados()));
}

void ListaAlumno::insertarOrdenadoCreditos(Nodo *nodoNuevo)
{
    Nodo *nodoAnterior = nullptr;
    Nodo *nodoActual = this->cabeza;

    // caso la lista esté vacía
    if (listaEstaVacia() == true)
    {
        this->cabeza = nodoNuevo;
        return;
    }
    // recorrer la lisat
    while (condicionInsercion(nodoActual, nodoNuevo))
    {
        nodoAnterior = nodoActual;
        nodoActual = nodoActual->obtenerNodoSiguiente();
    }
    // caso sea el primero
    if (nodoAnterior == nullptr)
    {
        insertarAlInicio(nodoNuevo);
        return;
    }
    // caso general (incluyendo al final)
    nodoAnterior->establecerNodoSiguiente(nodoNuevo);
    nodoNuevo->establecerNodoSiguiente(nodoActual);
}