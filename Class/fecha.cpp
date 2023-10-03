#include "fecha.hpp"

Fecha::Fecha()
{
    this->dia = 0;
    this->mes = 0;
    this->anio = 0;
}

Fecha::Fecha(int dia, int mes, int anio)
{
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

void Fecha::verFecha() const
{
    std::cout << "Día: " << dia << std::endl;
    std::cout << "Mes: " << mes << std::endl;
    std::cout << "Año: " << anio << std::endl;
}