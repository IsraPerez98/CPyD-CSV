#include "funciones.h"


void AddPromedioGeneral (std::string arreglo[][14],int lineas){//promedios recibe arreglo_datos, 15000
    /*
    std::string arregloCopia[15000][10] = arreglo;
    for(int i = 0; i < lineas; i++){ //transformar notas a floats
        for(int j = 2; j < 10; j++){
            float num_float = std::stof(arregloCopia[i][j]);
            arregloCopia[i][j] = num_float;
        }
    }
    */
    for(int i = 0; i < lineas; i++){ //calcular promedios
        float acu = 0;
        for(int j = 2; j < 10; j++){
            acu = std::stof(arreglo[i][j]) + acu;
        }
        float promedio = acu / 8;        
        arreglo[i][10] = ftos(promedio);
    } 
}
void AddPromedioArtesEdFisica (std::string arreglo[][14],int lineas){//promedios recibe arreglo_datos, 15000
    for(int i = 0; i < lineas; i++){ //calcular promedios
        float promedio = (std::stof(arreglo[i][8]) + std::stof(arreglo[i][9]) )/ 2;
        arreglo[i][11] = ftos(promedio);
    }
}
void AddPromedioLenguaHistoria (std::string arreglo[][14],int lineas){//promedios recibe arreglo_datos, 15000
    for(int i = 0; i < lineas; i++){ //calcular promedios
        float promedio = (std::stof(arreglo[i][2]) + std::stof(arreglo[i][6]) )/ 2;
        arreglo[i][12] = ftos(promedio);
    }
}
void AddPromedioTecnoMateCiencia (std::string arreglo[][14],int lineas){//promedios recibe arreglo_datos, 15000
    for(int i = 0; i < lineas; i++){ //calcular promedios
        float promedio = (std::stof(arreglo[i][7]) + std::stof(arreglo[i][4]) + std::stof(arreglo[i][5]))/ 3;
        arreglo[i][13] = ftos(promedio);
    }
}



/* void quicksortPromedios (std::string A[][14],int izq, int der, int columna ) //(arreglo, 0, n-1, columna a comparar)
{ 
int i, j, x ; 
std::string aux[14];
i = izq; 
j = der; 
x = std::stof(A[ (izq + der) /2 ][columna]); 
    do{ 
        while( (std::stof(A[i][columna]) < x) && (j <= der) )
        { 
            i++;
        } 
        while( (x < std::stof(A[j][columna])) && (j > izq) )
        { 
            j--;
        } 
        if( i <= j )
        {
            for(int k = 0; k < 14; k++){
                aux[k] = A[i][k]; 
            }  
            for(int l = 0; l < 14; l++){
                A[i][l] = A[j][l]; 
            } 
            for(int m = 0; m < 14; m++){
                A[j][m] = aux[m]; 
            }  
            i++;  j--; 
        }
         
    }while( i <= j ); 
 
    if( izq < j ) 
        quicksortPromedios( A, izq, j, columna ); 
    if( i < der ) 
        quicksortPromedios( A, i, der, columna ); 
} */




//Funcion mejores 100 promedios general
void maximos(std::string arreglo[][14]){

    //quicksortPromedios(arreglo, 0, 15000, 10);
    quickSort(arreglo, 0, 14999, 10);

/* 
    for(int i=0; i <100; i++)
    {
        for(int j=0; j<14; j++)
        {
            std::cout << arreglo[i][j] << " ";
        }
        std::cout << std::endl;
    }
 */
}

//Funcion mejores promedios Arte y educacion fisica

void artistico (std::string arreglo[][14]){

    quickSort(arreglo, 100, 14999, 11);

/* 
    for(int i=100; i <200; i++)
    {
        for(int j=0; j<14; j++)
        {
            std::cout << arreglo[i][j] << " ";
        }
        std::cout << std::endl;
    }
 */
}


//Funcion mejores promedios Lenguaje e Historia
void humanismo(std::string arreglo[][14]){
    quickSort(arreglo, 200, 14999, 12);
/* 
    for(int i=200; i <300; i++)
    {
        for(int j=0; j<14; j++)
        {
            std::cout << arreglo[i][j] << " ";
        }
        std::cout << std::endl;
    }
 */
}


//Funcion mejores promedios Matemáticas y Ciencias
void tecnico(std::string arreglo[][14]){
    quickSort(arreglo, 300, 14999, 13);
/* 
    for(int i=300; i <400; i++)
    {
        for(int j=0; j<14; j++)
        {
            std::cout << arreglo[i][j] << " ";
        }
        std::cout << std::endl;
    }
 */
}
