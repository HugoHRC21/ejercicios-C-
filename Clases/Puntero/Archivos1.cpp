//Ejercicio: Copiar el contenido de un archivo a otro.
//Descripción: Escribe un programa que abra un archivo de 
//texto, lea su contenido y lo copie en otro archivo. 
//Asegúrate de manejar correctamente la apertura, lectura 
//y escritura de los archivos, y manejar situaciones de error.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main (){
    const string nameA1 = "archivoPrimero.txt";
    const string nameA2 = "archivoCopia.txt";

    ifstream archivoPrimero(nameA1);
    ofstream archivoCopia(nameA2);
    
  
    string linea;
    while (getline(archivoPrimero, linea)) {
        archivoCopia << linea << '\n';
    }

    archivoPrimero.close();
    archivoCopia.close();

    cout << "Archivo copiado con éxito." << endl;

    return 0;
}
