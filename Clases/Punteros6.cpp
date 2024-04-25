//Escribe una función que tome un arreglo de enteros y su tamaño, 
//y que ordene los elementos del arreglo de forma ascendente o 
//descendente utilizando punteros.


#include <iostream>
#include <string>
using namespace std;


// Revisar nuevamente el swap

void swap(int &a, int &b) {
    int ref;

    ref = a;
    a = b;
    b = ref;
}

bool compare(int a, int b, bool order) {
    return order ? a > b :  a <= b;
}

void ordenarArreglo (int* arr, int size, bool order){
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (compare(*(arr + j), *(arr + j + 1), order)) swap(*(arr + j), *(arr + j + 1));
}

int main (){
    int arr [] = { 15, 18, 97, 62, 35, 74, 69, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Arreglo original mi chino: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    cout << endl;

    ordenarArreglo (arr, size, true);
    cout << "Arreglo ordenado ascendentemente mi chino: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    ordenarArreglo (arr, size, false);
    cout << "Arreglo ordenado descendentemente mi chino: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;

}