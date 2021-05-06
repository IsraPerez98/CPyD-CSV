#pragma once

#include <string>
#include <sstream>

std::string ftos(float f);

/**
 * quickSort que funciona con arreglos bidimensionales
 * 
 * @param arreglo arreglo con el que se trabaja
 * @param inicio indice desde donde se empieza a trabajar
 * @param fin indice donde se termina de trabajar
 * @param columna_sort columna que se utiliza como parametro para el ordenamiento
 */
void quickSort(std::string arreglo [][14], int inicio, int fin, int columna_sort);