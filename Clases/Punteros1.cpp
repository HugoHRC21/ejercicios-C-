//Ejercicio de intercambio de valores: 
//Escribe una función en C++ que intercambie el 
//valor de dos variables enteras utilizando punteros.

#include <iostream>
#include <string>
using namespace std;

void intercambio(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
int main (){
    int a = 7;
    int b = 93;

    cout << "Valores antes realizar el intercambio de variables son: a= " << a << " y b= " << b << endl;

    intercambio(&a, &b);

    cout << "los valores luego del intercabio de variable son: a= " << a << " y b= " << b << endl;

    return 0;
}