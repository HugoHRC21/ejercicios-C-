#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::ifstream archivo("archivoPrimero.txt");
    if (!archivo) {
        std::cerr << "No se pudo abrir el archivo." << std::endl;
        return 1;
    }

    std::string linea;
    int contadorPalabras = 0;

    while (std::getline(archivo, linea)) {
        std::string palabra;
        std::istringstream iss(linea);

        while (iss >> palabra) {
            std::cout << palabra << std::endl;
            contadorPalabras++;
        }
    }

    archivo.close();

    std::cout << "Número total de palabras: " << contadorPalabras << std::endl;

    return 0;
}