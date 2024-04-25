#include "Clases3.h"

Rectangulo::Rectangulo(float _alto, float _ancho) {
    alto = _alto;
    ancho = _ancho;
}

float Rectangulo::area() {
    return alto * ancho;
}

float Rectangulo::perimetro() {
    return 2 * (alto + ancho);
}

int main() {
    Rectangulo r1(56, 58);

    float area = r1.area();
    float perimetro = r1.perimetro();

    std::cout << "Área del rectángulo: " << area << std::endl;
    std::cout << "Perímetro del rectángulo: " << perimetro << std::endl;
    return 0;
}