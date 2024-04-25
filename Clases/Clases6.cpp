
#include "Clases6.h"

//constructor
rectangulo::rectangulo(){
}

//Setters
void rectangulo::setAlto(float _alto){
    alto = _alto;
}
void rectangulo::setAncho(float _ancho){
    ancho = _ancho;
}

//getters
float rectangulo::getAlto(){
    return alto;
}
float rectangulo::getAncho(){
    return ancho;
}

int main(){
    rectangulo rect1= rectangulo();

    rect1.setAncho(15); 
    rect1.getAncho(); 

    rect1.setAlto(15); 
    rect1.getAlto(); 

    std::cout << rect1.getAlto() << " " <<rect1.getAncho() << std::endl;

    return 0;
}