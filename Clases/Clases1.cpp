#include "Clases1.h" 

trabajador::trabajador(int _edad, int _numerotrabajador, int _horastrabajo, std::string _nombre, std::string _cargo, std::string _departamento){
        edad = _edad;
        numerotrabajdor = _numerotrabajador;
        horastrabajo = _horastrabajo;
        nombre = _nombre;
        cargo = _cargo;
        departamento = _departamento;
}

void trabajador::jornada(){
        std::cout << "El trabajador nº " << numerotrabajdor << " , de nombre " << nombre << " trabajo " << horastrabajo << " horas" << std::endl;
}
void trabajador::area(){
        std::cout << "el trabajador nº " << numerotrabajdor << " , de nombre " << nombre << " pertenece al area de " << departamento << std::endl;
}
void trabajador::actividades(){
        std::cout << "el trabajador nº " << numerotrabajdor << " , de nombre " << nombre << " tiene " << edad << " años de edad y desemepña labores del cargo de " << cargo << std::endl;
} 

int main(){
    trabajador Trabajador1(24, 1598, 8, "Carlos", "auxiliar de mantenimiento","Mantenimiento");

    Trabajador1.actividades();
    Trabajador1.area();
    Trabajador1.jornada();
    return 0;
}