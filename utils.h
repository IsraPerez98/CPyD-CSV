#pragma once

#include <string>
#include <iomanip>
#include <sstream>

/**
 * funcion que transforma un float a string
 * 
 * @param f el valor float
 * @param f precision de decimales
 */
std::string ftos(float f, int precision);

/**
 * quickSort que funciona con arreglos bidimensionales
 * 
 * @param arreglo arreglo con el que se trabaja
 * @param inicio indice desde donde se empieza a trabajar
 * @param fin indice donde se termina de trabajar
 * @param columna_sort columna que se utiliza como parametro para el ordenamiento
 */
void quickSort(std::string arreglo [][14], int inicio, int fin, int columna_sort);