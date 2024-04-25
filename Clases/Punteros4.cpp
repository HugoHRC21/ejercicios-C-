//Escribe una función que tome un arreglo de enteros y 
//su tamaño, y que encuentre el valor máximo y mínimo en el 
//arreglo utilizando punteros. La función debe imprimir los valores máximo y mínimo.

#include <iostream>
#include <string>
using namespace std;

// find_max, find_min
// Usar ingles

int encontranMax (int size, const int*arr){
    int max = 0;
    
    for (int i = 0; i < size; i++)
        if (*(arr + i) > max ) 
            max = *(arr + i);
        
    return max;
}
int encontranMin (int size, const int*arr){
  
    int min = arr[0];
    for (int i = 0; i < size; i++)
        if (*(arr + i) < min )
            min = *(arr + i);
        
    
    return min;
}

int main (){
    int arr[] ={56,51,38,13,98};
    int size = sizeof(arr) / sizeof(arr[0]);

    int Valormax = encontranMax(size,arr);
    int Valormin = encontranMin(size,arr);

    cout << "el mayor valor de los elementos del arreglo es: " << Valormax << endl;
    cout << "el menor valor de los elementos del arreglo es: " << Valormin << endl;
    return 0;
}