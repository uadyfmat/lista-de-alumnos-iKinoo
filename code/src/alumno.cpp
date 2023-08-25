#include "alumno.h"

AlumnoPtr crearAlumno(string nombreCompleto, int creditosAprobados, int semestreEquivalente)
{
    AlumnoPtr alumnoNuevo = new Alumno;

    alumnoNuevo->nombreCompleto = nombreCompleto;
    alumnoNuevo->creditosAprobados = creditosAprobados;
    alumnoNuevo->semestreEquivalente = semestreEquivalente;

    return alumnoNuevo;
}

NodoPtr crearNodo(AlumnoPtr alumno)
{
    NodoPtr nodoNuevo = new Nodo;

    nodoNuevo->alumno = alumno;

    nodoNuevo->nodoSiguiente = nullptr;

    return nodoNuevo;
}
ListaPtr crearLista()
{
    ListaPtr listaNueva = new Lista;

    listaNueva->cabeza = nullptr;
    return listaNueva;
}

void imprmirAlumno(AlumnoPtr alumno)
{
    cout << "Nombre: " << alumno->nombreCompleto << endl;
    cout << "Creditos aprovados: " << alumno->creditosAprobados << endl;
    cout << "Semestre equivalente: " << alumno->semestreEquivalente << endl;
}