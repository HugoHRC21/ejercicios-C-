#include <iostream>
#include <vector>

void CribaDeEratostenes(int N) {
    std::vector<bool> esPrimo(N + 1, true); // Inicializamos todos los números como primos
    esPrimo[0] = esPrimo[1] = false; // 0 y 1 no son primos

    for (int i = 2; i * i <= N; i++) {
        if (esPrimo[i]) {
            for (int j = i * i; j <= N; j += i) {
                esPrimo[j] = false; // Marcamos los múltiplos de i como no primos
            }
        }
    }

    std::cout << "Los primeros " << N << " números primos son:" << std::endl;
    for (int i = 2, count = 0; count < N; i++) {
        if (esPrimo[i]) {
            std::cout << i << " ";
            count++;
        }
    }
}

int main() {
    int N;
    std::cout << "Ingrese la cantidad de números primos que desea imprimir: ";
    std::cin >> N;

    CribaDeEratostenes(N);

    return 0;
}