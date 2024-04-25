//Construir una definición de clase que se pueda utilizar para representar un empleado de una compañía. 
//Cada empleado se define por un número entero ID, un salario y el número máximo de horas de 
//trabajo por semana. Los servicios que debe proporcionar la clase, al menos deben permitir introducir 
//datos de un nuevo empleado, visualizar los datos 
//existentes de un nuevo empleado y capacidad para 
//procesar las operaciones necesarias para dar de alta 
//y de baja en la seguridad social y en los seguros 
//que tenga contratados la compañía.

#include <iostream>
#include <string>

class empleado{
    private:
        int horasSemana;
        int numeroIdentificacion;
        float salario;
    public:
    // constructores
        empleado();
    //Funciones
        void empleadoExistente();
        float calculoSalarioDia();
    //Get
        int getHorasSemana();
        int getNumeroIdentificacion();
        float getSalario();
    //Set
        void setHorasSemana();
        void setNumeroIdentificacion();
        void setSalario();
};

empleado::empleado(){
}

float empleado::calculoSalarioDia(){
   return (salario / 30);
}

//Get (retornar datos)

int empleado::getHorasSemanas(){
    return horasSemana;
}
int empleado::getNumeroIdentificacion(){
    return numeroIdentificacion;
}
float empleado::getSalario(){
    return salario;
}

//Set (Asignar datos)
void empleado::setHorasSemana(int _horasSemanas){  
    horasSemana = _horasSemanas; 
}
void empleado::setNumeroIdentificacion(int _numeroIdentificacion){  
    numeroIdentificacion = _numeroIdentificacion; 
}
void empleado::setSalario(int _salario){  
    salario = _salario; 
}

int main(){
    empleado ep1= empleado ();

    ep1.setHorasSemana(48);
    ep1.getHorasSemana();

    std::cout << ep1.getHorasSemana() << std::endl;
        return 0;
}