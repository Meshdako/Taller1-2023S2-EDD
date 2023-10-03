#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <limits>       //relacionada a los límites de valores
#include <cctype>
#include <set>

// Clases
#include "Class/rut.hpp"
#include "Class/fecha.hpp"
#include "Class/direccion.hpp"
#include "Class/patente.hpp"

void PressEnterToContinue();

void ValorAleatorio(Patente p[], int indice);

void VerificarDigitoVerificador(Patente p[], int indice);

void TotalizadorPatentesComerciales(Patente p[], int indice, int valorUTM);

void BuscarRolRut(Patente p[], int indice, int Rol_Rut);

void PatentesAntiguedad(Patente p[], int indice);

// Funciones Externas
void Menu(Patente p[], int indice);

// Función de lectura de datos
void leerDatos(std::string nombreArchivo, Patente p[], int &indice);

std::vector<std::string> split(std::string, char);

#endif  // FUNCIONES_H