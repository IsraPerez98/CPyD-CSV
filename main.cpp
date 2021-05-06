#include <iostream>
#include <string>
#include <filesystem>



#include "leeryescribir.h"
#include "funciones.h"

namespace fs = std::filesystem;

/**
 * Este programa procesa el archivo csv indicado y
 * produce los archivos resultantes segun lo dispuesto en el Taller 1
 * 
 * @param argc cantidad de argumentos procesados por la línea de comandos.
 * @param argv archivo csv que se debe procesar
 */

int main(int argc, char** argv)
{

    if (argc < 2) {
        std::cout << "Falta el argumento del archivo" << std::endl;
        return (EXIT_FAILURE);
    }

    fs::path archivo = fs::path(argv[1]);

    fs::path directorio = archivo.parent_path();

    /*
     * Necesitamos la ubicacion del archivo original, para general los archivos de salida
     */
    std::string directorio_str = directorio.u8string() + "/" ;

    int lineas_texto = 15000;

    std::string arreglo_datos[lineas_texto][14];

    /*
     * Procesamos el archivo csv y almacenamos sus datos en el arreglo_datos
     */
    csv_a_arreglo(arreglo_datos, lineas_texto, 10, archivo);

    /*
     * Ingresamos 4 columnas a la matriz, con los promedios de cada punto solicidato
     */
    AddPromedioGeneral(arreglo_datos, lineas_texto);
    AddPromedioArtesEdFisica (arreglo_datos,lineas_texto);
    AddPromedioLenguaHistoria(arreglo_datos,lineas_texto);
    AddPromedioTecnoMateCiencia(arreglo_datos,lineas_texto);


    /*
     * Ordenamos los estudiantes segun promedio general
     * escribimos los primeros 100 valores al cvs
     */
    maximos(arreglo_datos);
    escribir_csv(arreglo_datos, 0, 99, 10, directorio_str + "maximos.csv");

    /*
     * Ordenamos los estudiantes a partir del numero 100 y
     * escribimos los siguientes 100 en el archivo csv
     */
    artistico(arreglo_datos);
    escribir_csv(arreglo_datos, 100, 199, 11, directorio_str + "artistico.csv");

    /*
     * Ordenamos los estudiantes a partir del numero 200 y
     * escribimos los siguientes 100 en el archivo csv
     */
    humanismo(arreglo_datos);
    escribir_csv(arreglo_datos, 200, 299, 12, directorio_str + "humanismo.csv");

    /*
     * Ordenamos los estudiantes a partir del numero 300 y
     * escribimos los siguientes 100 en el archivo csv
     */
    tecnico(arreglo_datos);
    escribir_csv(arreglo_datos, 300, 399, 13, directorio_str + "tecnico.csv");


    std::cout << "Integrantes del grupo:" << std::endl;
    std::cout << "Diego Nuñez Gomez" << std::endl;
    std::cout << "Andres Parada Claussen" << std::endl; 
    std::cout << "Israel Perez Berrios" << std::endl;

    return 0;
}