#include "leeryescribir.h"


void csv_a_arreglo(std::string arreglo[][14], int lineas, int columnas, std::string archivo)
{
    std::ifstream archivo_stream;
    archivo_stream.open(archivo);

    std::string valor;

    if (archivo_stream.is_open()) 
    {
        for(int i = 0; i < lineas; i++) // i es el numero de linea
        {
            for(int c = 0; c < columnas - 1; c ++) // c es la columna
            {
                std::getline(archivo_stream,valor,';');
                valor.erase(std::remove( valor.begin(), valor.end(), '\"' ),valor.end()); //eliminacion de comillas para trabajar los datos
                arreglo[i][c] = valor;
            }

            // el ultimo valor no tiene ; asi que
            getline(archivo_stream,valor);
            valor.erase(std::remove( valor.begin(), valor.end(), '\"' ),valor.end());
            arreglo[i][columnas -1] = valor;
        }
    }
    else
    {
        std::cout << "error al abrir archivo" << std::endl;
    }
    archivo_stream.close();
}


void escribir_csv(std::string arreglo[][14], int inicio, int final, int columna_promedio, std::string archivo)
{
    std::ofstream archivo_stream;
    archivo_stream.open(archivo);

    

    for(int i=inicio; i <= final;i++)
    {
        archivo_stream << '"' << arreglo[i][0] << '"' << ";" << '"' << arreglo[i][1] << '"' << ";" << '"' << arreglo[i][columna_promedio] << '"' << std::endl;
    }
}