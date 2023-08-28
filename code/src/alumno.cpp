#include "alumno.h"

// constructor
Alumno::Alumno(string _nombreCompleto, int _creditosAprobados, int _semestreEquivalente)
{

    nombreCompleto = _nombreCompleto;
    creditosAprobados = _creditosAprobados;
    semestreEquivalente = _semestreEquivalente;
    cout << "Se creado un alumno en la dirección " << this << endl;
}
// destructor
Alumno::~Alumno()
{
}

/* getters */
string Alumno::obtenerNombreCompleto()
{
    return nombreCompleto;
}
int Alumno::obtenerCreditosAprobados()
{
    return creditosAprobados;
}
int Alumno::obtenerSemestreEquivalente()
{
    return semestreEquivalente;
}
/* fin getters */
/* setters */
void Alumno::establecerNombreCompleto(string _nombreCompleto)
{
    nombreCompleto = _nombreCompleto;
}
void Alumno::establecercreditosAprobados(int _creditosAprobados)
{
    creditosAprobados = _creditosAprobados;
}
void Alumno::establecerSemestreEquivalente(int _semestreEquivalente)
{
    semestreEquivalente = _semestreEquivalente;
}
/* fin setters */

void Alumno::mostrarDatos(string enLista)
{
    if (enLista == "")
    {
        cout << left << setw(30) << "Nombre Completo";
        cout << right << setw(20) << "Creditos Aprobados";
        cout << right << setw(30) << "Semestre Equivalente" << endl;
    }

    cout << left << setw(30) << this->nombreCompleto;
    cout << right << setw(20) << this->creditosAprobados;
    cout << right << setw(30) << this->semestreEquivalente << endl;
}