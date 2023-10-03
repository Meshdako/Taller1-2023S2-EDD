#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <limits>       //relacionada a los límites de valores
#include <cctype>

// Clases
#include "Class/rut.hpp"
#include "Class/fecha.hpp"
#include "Class/direccion.hpp"
#include "Class/patente.hpp"

void PressEnterToContinue();

// Funciones Externas
void Menu(Patente p[], int indice);

// Función de lectura de datos
void leerDatos(std::string nombreArchivo, Patente p[], int &indice);

std::vector<std::string> split(std::string, char);

#endif  // FUNCIONES_H