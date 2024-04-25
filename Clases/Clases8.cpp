//Crea una clase "Estudiante" con atributos para el nombre y la edad. 
//Implementa los métodos "setNombre", "setEdad", "getNombre" y "getEdad". 
//Luego, crea un arreglo de objetos "Estudiante" y permite al usuario 
//ingresar los datos de varios estudiantes y mostrarlos por pantalla.

#include <iostream>
#include <string>
using namespace std; 

class estudiante
{
private:
    string nombre;
    int edad;

public:
    estudiante(string, int);
    //set
    bool setNombre(string);
    int setEdad (int);
    //get
    string getNombre();
    int getEdad();    
};
estudiante::estudiante(string _nombre, int _edad)
{
    setEdad(_edad);
    nombre = _nombre;
    edad = _edad;
}
//Get
string estudiante::getNombre()
{
    return nombre;
}
int estudiante::getEdad()
{
    return edad;
}
//Set
bool estudiante::setNombre(string _nuevoNombre)
{
    nombre = _nuevoNombre;
    return true;
}
int estudiante::setEdad(int _nuevoEdad)
{
    if (_nuevoEdad < 4)
    {
        throw invalid_argument("la edad ingresada es invalida");
    }
    edad = _nuevoEdad;
    return true;
}

int main(){
    estudiante est1("Hugo", 19);

    cout << "Nombre del estudiante: " << est1.getNombre() << "; Edad del estudiante: " << est1.getEdad() << endl;
    return 0;
}