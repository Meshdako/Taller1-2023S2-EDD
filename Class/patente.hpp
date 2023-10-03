#ifndef PATENTE_H
#define PATENTE_H

#include <iostream>

#include "rut.hpp"
#include "fecha.hpp"
#include "direccion.hpp"

class Patente
{
    private:
        int rol;
        Rut rut;
        std::string nombre;
        Fecha fechaNacimiento;
        Direccion direccion;
        std::string giro;
        std::string tipoPatente;
        int valorPatente;
    public:
        Patente();
        Patente(int, Rut, std::string, Fecha, Direccion, std::string, std::string, int);

        // Setters and Getters
        void setRol(int x){this->rol = x;}
        void setRut(Rut x){this->rut = x;}
        void setNombre(std::string x){this->nombre = x;}
        void setFechaNacimiento(Fecha x){this->fechaNacimiento = x;}
        void setDireccion(Direccion x){this->direccion = x;}
        void setGiro(std::string x){this->giro = x;}
        void setTipoPatente(std::string x){this->tipoPatente = x;}
        void setValorPatente(int x){this->valorPatente = x;}

        int getRol() const {return this->rol;}
        Rut getRut() const {return this->rut;}
        std::string getNombre() const {return this->nombre;}
        Fecha getFechaNacimiento() const {return this->fechaNacimiento;}
        Direccion getDireccion() const {return this->direccion;}
        std::string getGiro() const {return this->giro;}
        std::string getTipoPatente() const {return this->tipoPatente;}
        int getValorPatente() const {return this->valorPatente;}

        // Methods
        void verPatente();
};

#endif  // PATENTE_H