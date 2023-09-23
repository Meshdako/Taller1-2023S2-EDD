#ifndef DIRERCCION_H
#define DIRECCION_H

#include <iostream>

class Direccion
{
    private:
        std::string calle;
        int numero;
        std::string comuna;
    public:
        Direccion();
        Direccion(std::string, int, std::string);
        ~Direccion();

        // Setters and Getters
        void setCalle(std::string x){this->calle = x;}
        void setNumero(int x){this->numero = x;}
        void setComuna(std::string x){this->comuna = x;}
        std::string getCalle() const {return this->calle;}
        int getNumero() const {return this->numero;}
        std::string getComuna() const {return this->comuna;}

        // Methods
        void verDireccion() const;
};

#endif  // DIRECCION_H