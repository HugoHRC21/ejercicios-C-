#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declarar un vector de enteros
    vector<int> miVector;

    // Agregar elementos al vector
    miVector.push_back(10);
    miVector.push_back(20);
    miVector.push_back(30);
    miVector.push_back(40);
    miVector.push_back(50);
    miVector.push_back(60);
    miVector.push_back(70);
    miVector.push_back(80);
    miVector.push_back(90);


    // Acceder a los elementos del vector
    cout << "Primer elemento: " << miVector[0] << endl;
    cout << "Segundo elemento: " << miVector[1] << endl;
    cout << "Tercer elemento: " << miVector[2] << endl;
    cout << "Tercer elemento: " << miVector[3] << endl;
    cout << "Tercer elemento: " << miVector[4] << endl;
    cout << "Tercer elemento: " << miVector[5] << endl;
    cout << "Tercer elemento: " << miVector[6] << endl;
    cout << "Tercer elemento: " << miVector[7] << endl;
    cout << "Tercer elemento: " << miVector[8] << endl;

    // Obtener el tamaño del vector
    cout << "Tamaño del vector: " << miVector.size() << endl;

    // Obtener la capacidad del vector
    cout << "Capacidad del vector: " << miVector.capacity() << endl;

    // Iterar sobre los elementos del vector
    for (int i = 0; i < miVector.size(); i++) {
        cout << "Elemento " << i << ": " << miVector[i] << endl;
    }

    return 0;
}