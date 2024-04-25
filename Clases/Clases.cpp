#include <iostream>
#include <string>

class persona {
    private:
        int edad;
        std::string nombre;
    public:
        persona(int,std::string);
        void leer();
        void correr(); 
};

persona::persona(int _edad, std::string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void persona::leer(){
    std::cout << "Soy " << nombre << " y estoy leyendo un libro" << std::endl;
}
void persona::correr(){
    std::cout << "soy " << nombre << " tengo " << edad << " y voy a correr 10K" << std::endl;
}

int main (){
    persona p1(24,"hugo");

    p1.leer();
    p1.correr();
    return 0;
}