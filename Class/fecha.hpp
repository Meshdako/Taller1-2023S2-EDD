#ifndef FECHA_H
#define FECHA_H

#include <iostream>

class Fecha
{
    private:
        int dia;
        int mes;
        int anio;
    public:
        Fecha();
        Fecha(int, int, int);

        // Setters and Getters
        void setDia(int x){this->dia = x;}
        void setMes(int x){this->mes = x;}
        void setAnio(int x){this->anio = x;}
        int getDia() const {return this->dia;}
        int getMes() const {return this->mes;}
        int getAnio() const {return this->anio;}

        // Methods
        void verFecha() const;
};

#endif  // FECHA_H