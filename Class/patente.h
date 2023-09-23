#ifndef PATENTE_H
#define PATENTE_H

#include <iostream>
#include "rut.h"
#include "fecha.h"
#include "direccion.h"

class Patente
{
    private:
        int rol;
        Rut rut;
        std::string nombre;
        Fecha fechaNacimiento;
        Direccion direccion;
        std::string tipoPatente;
    public:
        Patente();
        Patente(int, Rut, std::string, Fecha, Direccion, std::string);
        ~Patente();

        // Setters and Getters
        void setRol(int x){this->rol = x;}
        void setRut(Rut x){this->rut = x;}
        void setNombre(std::string x){this->nombre = x;}
        void setFechaNacimiento(Fecha x){this->fechaNacimiento = x;}
        void setDireccion(Direccion x){this->direccion = x;}
        void setTipoPatente(std::string x){this->tipoPatente = x;}
        int getRol() const {return this->rol;}
        Rut getRut() const {return this->rut;}
        std::string getNombre() const {return this->nombre;}
        Fecha getFechaNacimiento() const {return this->fechaNacimiento;}
        Direccion getDireccion() const {return this->direccion;}
        std::string getTipoPatente() const {return this->tipoPatente;}

        // Methods
        void verPatente() const;
};

#endif  // PATENTE_H