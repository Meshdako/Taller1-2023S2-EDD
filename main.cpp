#include <iostream>

#include "funciones.hpp"
#include "funciones.cpp"

// Clases
#include "Class/rut.hpp"
#include "Class/rut.cpp"
#include "Class/fecha.hpp"
#include "Class/fecha.cpp"
#include "Class/direccion.hpp"
#include "Class/direccion.cpp"
#include "Class/patente.hpp"
#include "Class/patente.cpp"

#define Maximum_Digits 10
#define PATENTES 800

int main() {
    Patente p[PATENTES];

    int indice = 0;

    std::string datos = "patentesComerciales.txt";

    leerDatos(datos, p, indice);

    Menu(p, indice);

    return 0;
}