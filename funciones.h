#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <vector.h>
#include <sstream>
#include <fstream>

// Clases
#include "Class/rut.h"
#include "Class/rut.cpp"
#include "Class/fecha.h"
#include "Class/fecha.cpp"
#include "Class/direccion.h"
#include "Class/direccion.cpp"
#include "Class/patente.h"
#include "Class/patente.cpp"

// Funciones Externas

// Función de lectura de datos
void leerDatos(std::string, Patente, int &);

#endif  // FUNCIONES_H