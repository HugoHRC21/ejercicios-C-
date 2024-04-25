#include <iostream>
#include <string>

class trabajador {
    private:
        int edad;
        int numerotrabajdor;
        int horastrabajo;
        std::string nombre;
        std::string cargo;
        std::string departamento;
    public:
        void jornada();
        void area();
        void actividades();
        trabajador(int, int, int, std::string, std::string, std::string);
};