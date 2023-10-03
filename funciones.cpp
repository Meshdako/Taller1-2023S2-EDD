#include "funciones.hpp"

void PressEnterToContinue()
{
    std::cout << "Presiona Enter para continuar... " << std::flush;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Funciones Externas
void ValorAleatorio(Patente p[], int indice)
{
    for(int i = 0; i < indice; i++){
        //generar valor aleatorio entre 1 y 8
        int valor = rand() % 8 + 1;
        p[i].setValorPatente(valor);

        std::cout << "Patente: " << p[i].getRol() << " - Valor Patente: " << p[i].getValorPatente() << std::endl;
    }
}

void VerificarDigitoVerificador(Patente p[], int indice)
{
    for(int i = 0; i < indice; i++){
        std::cout << "Rut: " << p[i].getRut().getRut() << " - " << p[i].getRut().getDv() << "||";
        p[i].getRut().verificacion();
        p[i].getRut().verRut();
    }
}

void TotalizadorPatentesComerciales(Patente p[], int indice, int valorUTM)
{
    int suma = 0;

    std::cout << "Leyendo datos..." << std::endl;
    
    for(int i = 0; i < indice; i++){
        system("clear");
        suma += p[i].getValorPatente();
        std::cout << "Patente N " << i + 1 << std::endl;
    }

    std::cout << "El total de patentes comerciales es: $" << suma * valorUTM << std::endl;
}

void BuscarRolRut(Patente p[], int indice, int Rol_Rut)
{
    int verificador = 0;
    for(int i = 0; i < indice; i++){
        if(p[i].getRol() == Rol_Rut){
            std::cout << "\t\t\e[1mPatente encontrada por ROL ingresado.\e[0m" << std::endl;
            p[i].verPatente();
            return;
        }
        if(p[i].getRut().getRut() == Rol_Rut){
            std::cout << "\t\t\e[1mPatente encontrada por RUT ingresado.\e[0m" << std::endl;
            p[i].verPatente();
            return;
        }
    }

    if (verificador == 0){
        std::cout << "No se encontró la patente." << std::endl;
        return;
    }
}

void PatentesAntiguedad(Patente p[], int indice)
{
    std::vector<std::string> patentes;

    std::cout << "Patentes serán ordenadas por TIPO DE PATENTE." << std::endl;

    for(int i = 0; i < indice; i++)
        patentes.push_back(p[i].getTipoPatente());

    //Mediante la librería SET borramos los duplicados en el vector de patentes.
    std::set<std::string> string_set(patentes.begin(), patentes.end());
    patentes.assign(string_set.begin(), string_set.end());

    for (unsigned i = 0, cont = 0; i < patentes.size(); i++){
        std::cout << "Patentes de tipo: " << patentes.at(i) << std::endl;
        for(int j = 0; j < indice; j++){
            if(patentes.at(i) == p[j].getTipoPatente() && p[j].getFechaNacimiento().getAnio() < 2018){
                p[j].verPatente();
                std::cout << "--------------------------------" << std::endl;
            }
        }
        PressEnterToContinue();
    }
}

void Menu(Patente p[], int indice)
{
    int opcion;

    int valorUTM, Rol_Rut;

    while(opcion != 0){
        std::cout << "Bienvenido al sistema de patentes comerciales" << std::endl;
        std::cout << "1. Completar Valor Patente" << std::endl;
        std::cout << "2. Actualizar Digito Verificador" << std::endl;
        std::cout << "3. Totalizar Patentes Comerciales:" << std::endl;
        std::cout << "4. Consulta por Patente:" << std::endl;
        std::cout << "5. Patentes por Antigüedad" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (opcion)
        {
        case 0:
            std::cout << "\t\t\e[1mSee You Space Cowboy...\e[0m" << std::endl;
            PressEnterToContinue();
            break;
        case 1:
            ValorAleatorio(p, indice);
            PressEnterToContinue();
            break;
        case 2:
            VerificarDigitoVerificador(p, indice);
            PressEnterToContinue();
            break;
        case 3:
            std::cout << "Ingrese el valor UTM que corresponde: ";
            std::cin >> valorUTM;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            TotalizadorPatentesComerciales(p, indice, valorUTM);
            PressEnterToContinue();
            break;
        case 4:
            std::cout << "Ingrese el ROL / RUT que desea buscar: ";
            std::cin >> Rol_Rut;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            BuscarRolRut(p, indice, Rol_Rut);
            PressEnterToContinue();
            break;
        case 5:
            PatentesAntiguedad(p, indice);
            break;
        
        default:
            std::cout << "Opción no válida" << std::endl;
            break;
        }
    }
}

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
            std::vector<std::string> data = split(lineaObtenida, ';');

            if (indice > 0){
                std::cout << "Cargando archivos..." << std::endl;
                system("clear");
                
                // Leemos el RUT
                std::stringstream ss(data[1]);
                int rut;
                char guion, digitoVerificador;

                ss >> rut >> guion >> digitoVerificador;
                ss.str().clear();

                // Leemos la fecha
                ss.str(data[5]);

                int dia, mes, anio;
                ss >> dia >> guion >> mes >> guion >> anio;
                ss.str().clear();

                // CAMBIAR DIRECCION POR DIRECCION COMERCIAL

                Patente Aux(std::stoi(data[0]), Rut(rut, digitoVerificador), data[2], Fecha(dia, mes, anio), Direccion(data[3]), data[4], data[6], 0);
                p[indice] = Aux;
            }
            indice++;
        }
    }

    std::cout << "¡Archivos cargados con éxito!" << std::endl;
    archivo.close();
}

std::vector<std::string> split(std::string lineaASeparar, char delimitador)
{
    std::vector<std::string> vector_interno;     //#include <vector>
    std::stringstream linea(lineaASeparar); //#include <sstream>
    std::string parteDelString;

    while (getline(linea, parteDelString, delimitador))
        vector_interno.push_back(parteDelString);

    return vector_interno;
}