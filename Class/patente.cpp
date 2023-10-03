#include "patente.hpp"

Patente::Patente() {
    this->rol = 0;
    this->rut = Rut();
    this->nombre = "0";
    this->fechaNacimiento = Fecha();
    this->direccion = Direccion();
    this->tipoPatente = "0";
    this->valorPatente = 0;
}

Patente::Patente(int rol, Rut rut, std::string nombre, Fecha fechaNacimiento, Direccion direccion, std::string giro, std::string tipoPatente, int valorPatente) {
    this->rol = rol;
    this->rut = rut;
    this->nombre = nombre;
    this->fechaNacimiento = fechaNacimiento;
    this->direccion = direccion;
    this->giro = giro;
    this->tipoPatente = tipoPatente;
    this->valorPatente = valorPatente;
}

void Patente::verPatente() {
    std::cout << "Rol: " << this->rol << std::endl;
    this->rut.verRut();
    std::cout << "Nombre: " << this->nombre << std::endl;
    this->fechaNacimiento.verFecha();
    this->direccion.verDireccion();
    std::cout << "Giro: " << this->giro << std::endl;
    std::cout << "Tipo de Patente: " << this->tipoPatente << std::endl;
}

