// Crea una clase "Rectángulo" que tenga atributos para el ancho y la altura. 
// Implementa los métodos "setAncho" y "setAltura" para establecer los valores de 
// los atributos, y los métodos "getAncho" y "getAltura" para obtener los valores 
// de los atributos. Luego, crea un objeto de la clase "Rectángulo" y muestra por pantalla su área.


#include <iostream>
#include <string>

class rectangulo {
    private:
        float alto;
        float ancho;
    public:
    //construtor 
        rectangulo();
    //set (ASIGNAR)
        void setAlto(float);
        void setAncho(float);
    //get (MOSTRAR)
        float getAlto();
        float getAncho();
    //metodos
        float area();
};