//determinar si un numero es primo o no, con punteros y ademas 
//indicar en que posicion de memoria esta guardado el numero

#include <iostream>
#include <string>
using namespace std;

int main (){
    int num, *ubi_num;

    cout << "Ingrese un número: "; cin >> num; 
    
    ubi_num = &num;

    bool esPrimo = true;
    for (int i = 2; i < (num -1); i++){
        if (num % i == 0)
        {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo)
    {
        cout << "el numero ingresado es primo, enhorabuena chaval!"<< endl;
        cout <<  "su posicion de memoria es: " <<  ubi_num << endl;
    } else {
        cout << "el numero ingresado no es primo :( "<< endl;
        cout <<  "su posicion de memoria es: " <<  ubi_num << endl;
    }
    
    
    
    
return 0;
}