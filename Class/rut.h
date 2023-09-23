#ifndef RUT_H
#define RUT_H

#include <iostream>

#define Maximum_Digits 10

class Rut
{
    private:
        int rut;
        char dv;
    public:
        Rut();
        Rut(int, char);
        ~Rut();

        // Setters and Getters
        void setRut(int x){this->rut = x;}
        void setDv(char x){this->dv = x;}
        int getRut() const {return this->rut;}
        char getDv() const {return this->dv;}

        // Methods
        char calcular_dv(int) const;
        void verificacion() const;
        void verRut() const;
};

#endif  // RUT_H