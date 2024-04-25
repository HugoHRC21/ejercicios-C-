//Implementa una clase "Punto" que tenga atributos para las coordenadas x e y. 
//Crea los métodos "setX", "setY", "getX" y "getY" para manipular las coordenadas. 
//Luego, crea dos objetos "Punto" y calcula la distancia entre ellos utilizando 
//la fórmula de la distancia euclidiana.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Punto{
    private:
        float x;
        float y;
    public:
        Punto(float,float);
        //get
        float getx();
        float gety();
        //set
        bool setx(float);
        bool sety(float);
        //metodo
        static float deuclidiana (Punto,Punto);
};
//construtor
Punto::Punto(float a,float b){
    setx(a);
    sety(b);
}
//get
float Punto::getx()
{
    return x;
}
float Punto::gety()
{
    return y;
}
//set
bool Punto::setx(float _nuevox)
{
    return x = _nuevox;
}
bool Punto::sety(float _nuevoy)
{
    return y = _nuevoy;
}
//metodo calculo distancia euclidiana
float Punto::deuclidiana(Punto p1, Punto p2)
{
    float distancia = sqrt(pow(p2.getx() - p1.getx(), 2) + pow(p2.gety() - p1.gety(), 2));
    return distancia;
}

int main(){
    Punto p1(15,19);
    Punto p2(18,26);

    cout << "las cordenadas del primer Punto son: X " << p1.getx() << ", Y " << p1.gety() << endl;
    cout << "las cordenadas del segundo Punto son: X " << p2.getx() << ", Y " << p2.gety() << endl;
    
    float distancia = Punto::deuclidiana(p1, p2);
    cout << "la distancia entre los 2 Puntos es: " << distancia << endl;

    return 0;
}