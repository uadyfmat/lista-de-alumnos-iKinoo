/* TODO
    - separar en alumno.h y lista.h
*/

#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include <string>

using namespace std;

class Alumno
{
private:
    int creditosAprovados;
    int semestreEquivalente;
    string nombreCompleto;

public:
    // constructor
    Alumno(string _nombreCompleto, int _creditosAprovados, int _semestreEquivalente);
    // destructor
    ~Alumno();
    /* getters */
    string obtenerNombreCompleto();
    int obtenerCreditosAprobados();
    int obtenerSemestreEquivalente();
    /* fin getters */
    /* setters */
    void establecerNombreCompleto(string _nombreCompleto);
    void establecerCreditosAprovados(int _creditosAprovados);
    void establecerSemestreEquivalente(int _semestreEquivalente);
    /* fin setters */
    void mostrarDatos();
};

#endif