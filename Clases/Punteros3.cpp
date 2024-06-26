#include <iostream>

int sumArray(const int* arr, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = sumArray(arr, size);

    std::cout << "La suma de los elementos del arreglo es: " << sum << std::endl;

    return 0;
}