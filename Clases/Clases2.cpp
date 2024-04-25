#include "Clases2.h"
reloj::reloj(int _hora, int _minutos, int _segundos){
    hora = _hora;
    minutos = _minutos;
    segundos = _segundos;
}

void reloj:: marcarHora(){
    std::cout<< "La Hora es: " << hora<< ":"<< minutos<< ":"<< segundos << std::endl;
}

int main(){
    reloj relojPrimero(4,55,10);

    relojPrimero.marcarHora();
    return 0;
}