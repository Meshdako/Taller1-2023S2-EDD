#include "patente.h"

Patente::Patente() {
    this->rol = 0;
    this->rut = Rut();
    this->nombre = "0";
    this->fechaNacimiento = Fecha();
    this->direccion = Direccion();
    this->tipoPatente = "0";
}

Patente::Patente(int rol, Rut rut, std::string nombre, Fecha fechaNacimiento, Direccion direccion, std::string tipoPatente) {
    this->rol = rol;
    this->rut = rut;
    this->nombre = nombre;
    this->fechaNacimiento = fechaNacimiento;
    this->direccion = direccion;
    this->tipoPatente = tipoPatente;
}

Patente::~Patente() {
    // Empty
}

