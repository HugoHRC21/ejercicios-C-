// Escribe una función que tome un arreglo de enteros y 
//su tamaño, y que invierta el orden de los elementos utilizando punteros.

#include <iostream>
#include <string>
using namespace std;

void copiarArr (int* arr,int* arr2, int size) {
    for (int i = 0; i < size; i++)
    {
        *(arr2 + i) = *(arr + i);
    }    
}


int main() {
    int arr[] = {98,2,3,4,16};
    int arr2[] = {99,3,4,5,17};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "arreglos originales: "<< endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "arreglos copiados: "<< endl;

    copiarArr (arr, arr2, size);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;



    return 0;
}