#include <iostream>
#include <string>

class Luz {
    private:
        std::string color;
    public:
        Luz(std::string);
        void cambiarColor();
        void mostrarColor();
};