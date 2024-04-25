#include <iostream>
#include <string>

class Rectangulo {
private:
    float alto;
    float ancho;
    std::string unidad;
public:
    Rectangulo(float, float);
    float area();
    float perimetro();
};