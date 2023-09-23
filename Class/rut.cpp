#include "rut.h"

Rut::Rut() {
    this->rut = 0;
    this->dv = '0';
}

Rut::Rut(int rut, char dv) {
    this->rut = rut;
    this->dv = dv;
}

Rut::~Rut() {
    // Empty
}

char Rut::calcular_dv(int rut) const
{
    int suma = 0;
    for(int j = 2; rut > 0; rut /= 10, j++) {
        if(j > 7) {
            j = 2;
        }
        
        suma += (rut % 10) * j;
    }

    int resto = suma / 11;
    resto *= 11;

    suma -= resto;
    suma = 11 - suma;
    
    std::string dv_calculado;

    if(suma == 11)
        dv_calculado = '0';
    else if(suma == 10)
        dv_calculado = 'K';
    else
        dv_calculado = std::to_string(suma);

    char dv_calculado_char = dv_calculado[0];
    return dv_calculado_char;
}


void Rut::verificacion() const
{
    // Calculamos el dígito verificador
    char dv_calculado = calcular_dv(rut);

    // Comparamos el dígito verificador calculado con el dígito verificador ingresado
    if (dv == dv_calculado) {
        // El RUT es válido
        return;
    } else {
        // El RUT es inválido
        throw std::invalid_argument("El RUT ingresado es inválido okok");
    }
}

void Rut::verRut() const
{
    std::cout << "RUT: " << rut << "-" << dv << std::endl;
}
