#pragma once

#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>


/**
 * Funcion que transforma un archivo csv en un arreglo bidimensional
 * @param arreglo arreglo donde se almacenan los datos en memoria
 * @param lineas lineas que se debe leer desde el csv
 * @param columnas columnas que posee el csv
 * @param archivo archivo .csv desde el que se leen los datos
 */
void csv_a_arreglo(std::string arreglo[][14], int lineas, int columnas, std::string archivo);


/**
 * Funcion que escribe los datos de un arreglo bidimensional a un archivo
 * @param arreglo arreglo que contiene los datos
 * @param inicio fila desde la que se comienza a escribir 
 * @param final fila desde la que se termina de escribir
 * @param columna_promedio indice de la columna con el promedio que se debe escribir al archivo
 * @param archivo archivo csv al que se escribe
 */
void escribir_csv(std::string arreglo[][14], int inicio, int final, int columna_promedio, std::string archivo);