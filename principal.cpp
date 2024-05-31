#include <ioatream>
#include "funciones.cpp"
#include "variables.h"

using namespace std;

int ejercicio1[Filas][Columnas];
int ejercicio2[Filas][Columnas];
int ejercicio3[Filas][Columnas];

int main(){
    ejercicio1();
    ejercicio2();
    ejercicio3();

cout << "Matriz de multiplos de 4 y 8: "<< endl;
for(int i=0; i< Filas; ++i){
    for(int j=0; j< Columnas; ++j){
        cout << ejercicio1[i][j]<<"\t";
    }
    cout<<endl;
}

cout << "\nMatriz de multiplos de 3: "<< endl;
for(int i=0; i< Filas; ++i){
    for(int j=0; j< Columnas; ++j){
        cout << ejercicio2[i][j]<<"\t";
    }
    cout<<endl;
}

cout << "\n Matriz suma: " << endl;
for(int i=0; i< Filas; ++i){
    for(int j=0; j< Columnas; ++j){
        cout << ejercicio3[i][j]<<"\t";
    }
    cout<<endl;
}

return0;
}