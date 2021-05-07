#pragma once

#include <string>
#include <fstream>
#include <iostream>

#include "utils.h"

#define PRECISIONFLOAT 6

/**
 * Agrega el promedio general al arreglo bidimensional en la columna 10
 * 
 * @param arreglo arreglo con el que se trabaja
 * @param lineas cantidad de lineas, o filas que tiene el arreglo
 */
void AddPromedioGeneral (std::string arreglo[][14],int lineas);

/**
 * Agrega el promedio de artes y ed fisica al arreglo bidimensional en la columna 11
 * 
 * @param arreglo arreglo con el que se trabaja
 * @param lineas cantidad de lineas, o filas que tiene el arreglo
 */
void AddPromedioArtesEdFisica (std::string arreglo[][14],int lineas);

/**
 * Agrega el promedio de lengua e historia al arreglo bidimensional en la columna 12
 * 
 * @param arreglo arreglo con el que se trabaja
 * @param lineas cantidad de lineas, o filas que tiene el arreglo
 */
void AddPromedioLenguaHistoria (std::string arreglo[][14],int lineas);

/**
 * Agrega el promedio de tecnologia, matematicas y ciencias al arreglo bidimensional en la columna 13
 * 
 * @param arreglo arreglo con el que se trabaja
 * @param lineas cantidad de lineas, o filas que tiene el arreglo
 */
void AddPromedioTecnoMateCiencia (std::string arreglo[][14],int lineas);

/**
 * Ordena el arreglo, segun los promedios generales
 * 
 * @param arreglo arreglo con el que se trabaja
 */
void maximos(std::string arreglo[][14]);

/**
 * Ordena el arreglo, segun los promedios en arte y ed fisica
 * empieza a contar desde la posicion 100
 * 
 * @param arreglo arreglo con el que se trabaja
 */
void artistico (std::string arreglo[][14]);

/**
 * Ordena el arreglo, segun los promedios en lengua e historia
 * empieza a contar desde la posicion 200
 * 
 * @param arreglo arreglo con el que se trabaja
 */
void humanismo(std::string arreglo[][14]);

/**
 * Ordena el arreglo, segun los promedios en tecnologia, matematica y ciencias
 * empieza a contar desde la posicion 300
 * 
 * @param arreglo arreglo con el que se trabaja
 */
void tecnico(std::string arreglo[][14]);