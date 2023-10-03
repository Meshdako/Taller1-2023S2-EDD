#include "direccion.hpp"

Direccion::Direccion()
{
    this->calle = "0";
    this->numero = 0;
    this->comuna = "0";
}

Direccion::Direccion(std::string calle, int numero, std::string comuna)
{
    this->calle = calle;
    this->numero = numero;
    this->comuna = comuna;
}

Direccion::Direccion(std::string calle)
{
    this->calle = calle;
    this->numero = 0;
    this->comuna = "0";
}

void Direccion::verDireccion() const
{
    std::cout << "Calle: " << calle << std::endl;
    std::cout << "Número: " << numero << std::endl;
    std::cout << "Comuna: " << comuna << std::endl;
}