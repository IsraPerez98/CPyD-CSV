#include "utils.h"


/**
 * funcion que transforma un float a string
 * 
 * @param f el valor float
 */
std::string ftos(float f)
{
    std::ostringstream ss;
    ss << f;
    return ss.str();
}

/**
 * Intercambia dos filas de un arreglo bidimensional
 * 
 * @param arreglo arreglo con el que se trabaja
 * @param a indice de fila a
 * @param b indice de fila b
 */
void swap(std::string arreglo [][14], int a, int b)
{
    std::string aux[14];

    for(int i=0; i < 14; i++)
    {
        aux[i] = arreglo[a][i];
    }
    for(int i=0; i < 14; i++)
    {
        arreglo[a][i] = arreglo[b][i];
    }
    for(int i=0; i < 14; i++)
    {
        arreglo[b][i] = aux[i];
    }
}

/**
 * particion para utilizar quicksort
 * 
 * @param arreglo arreglo con el que se trabaja
 * @param inicio inicio de la particion
 * @param fin final de la particion
 * @param columna_sort columna que se utiliza como parametro para el ordenamiento
 */
int particion (std::string arreglo[][14], int inicio, int fin, int columna_sort)
{
    //int pivote = fin;
    //std::string pivote[14] = arreglo[fin];    // pivote nop
    int i = (inicio - 1);  // indice del inicio
 
    for (int j = inicio; j <= fin- 1; j++)
    {
        // si elemento igual es menor al pivote
        if (std::stof(arreglo[j][columna_sort]) > std::stof(arreglo[fin][columna_sort]))
        {
            i++;    // aumentar el indice del inicio
            swap(arreglo,i,j);
        }
    }
    //swap(arreglo[i + 1], arreglo[fin]);
    swap(arreglo, i + 1, fin);
    return (i + 1);
}

void quickSort(std::string arreglo [][14], int inicio, int fin, int columna_sort)
{

    if (inicio < fin)
    {
        int indice_particion = particion(arreglo, inicio, fin, columna_sort);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arreglo, inicio, indice_particion -1, columna_sort);
        quickSort(arreglo, indice_particion + 1, fin,columna_sort);
    }
}