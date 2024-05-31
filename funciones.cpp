#include "variable.h"

void ejercicio1(){
    int contador = 4;
    for (int i = 0; i < Filas; ++i){
        for (int j = 0; j < Columnas; ++j){
            ejercicio1[i][j]=contador;
            contador +=4;
        }
    }
}

void ejercicio2(){
    int contador = 3;
    for (int i = 0; i < Filas; ++i){
        for (int j = 0; j < Columnas; ++j){
            ejercicio2[i][j]=contador;
            contador +=3;
        }
    }
}

void ejercicio3(){
    for (int i=0; i <Filas; ++i){
        for (int j=0; j < Columnas; ++j){
            ejercicio3[i][j]= ejercicio1[i][j] + ejercicio2[i][j]
        }
    }
}