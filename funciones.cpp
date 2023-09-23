#include "funciones.h"

// Funciones Externas

// Función de lectura de datos
void leerDatos(std::string nombreArchivo, Patente p[], int &indice)
{
    std::ifstream archivo;
    std::string lineaObtenida;
    std::string palabra;

    archivo.open(nombreArchivo, std::ios::in);

    if (archivo.is_open() == true){
        while (getline(archivo, lineaObtenida, '\n')){
            // ahora recorremos la línea
            vector<std::string> data = split(lineaObtenida, ';');

            if (indice > 0){
               
            }
            indice++;
        }
    }
    archivo.close();
}

vector<std::string> split(std::string lineaASeparar, char delimitador)
{
    vector<std::string> vector_interno;     //#include <vector>
    std::stringstream linea(lineaASeparar); //#include <sstream>
    std::string parteDelString;

    while (getline(linea, parteDelString, delimitador))
        vector_interno.push_back(parteDelString);

    return vector_interno;
}