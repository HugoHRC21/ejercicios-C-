#include <iostream>

void ordenarArreglo(int* arr, int size, bool ascendente) {
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (ascendente) {
                if (*(arr + j) > *(arr + j + 1)) {
                    temp = *(arr + j);
                    *(arr + j) = *(arr + j + 1);
                    *(arr + j + 1) = temp;
                }
            } else {
                if (*(arr + j) < *(arr + j + 1)) {
                    temp = *(arr + j);
                    *(arr + j) = *(arr + j + 1);
                    *(arr + j + 1) = temp;
                }
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Arreglo original: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Ordenar de forma ascendente
    ordenarArreglo(arr, size, true);
    std::cout << "Arreglo ordenado (ascendente): ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Ordenar de forma descendente
    ordenarArreglo(arr, size, false);
    std::cout << "Arreglo ordenado (descendente): ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}