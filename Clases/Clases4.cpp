#include "Clases4.h"
//Construir una clase llamada Luz que simule una luz 
//de tráfico. El atributo color de la clase debe cambiar 
//de Verde a Amarillo y a Rojo y de nuevo regresar 
//a Verde mediante la función Cambio. Cuando un 
//objeto Luz se crea su color inicial será Rojo

Luz::Luz(std::string _color){
    color = _color;
}

Luz::Luz(){
    color = "rojo";
}

void Luz::cambiarColor(){

    if (color == "verde")
    {
        color = "amarillo";
    }   else if (color == "amarillo")
    {
        color = "rojo";
    }   else if (color == "rojo")
    {
        color = "verde";
    } 
}

void Luz::mostrarColor(){
    std::cout << "el color del semaforo es:" << color << std::endl;
}

int main (){
    Luz semaforo("rojo");

    semaforo.mostrarColor();
    semaforo.cambiarColor();
    semaforo.mostrarColor();
 
    return 0;
}

