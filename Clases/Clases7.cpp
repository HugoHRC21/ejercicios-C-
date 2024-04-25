#include <iostream>
#include <string>


class cuentaBancaria {
    private:
        float saldo;
    public:
        cuentaBancaria(float);
        void retirar(float);
        void depositar (float);
        //get
        float getSaldo();
        //set
        bool setSaldo(float);
};

cuentaBancaria::cuentaBancaria(float _saldoinicial){
    setSaldo (_saldoinicial);
}
//Get   
float cuentaBancaria::getSaldo (){
    return saldo;
}
//Set
bool cuentaBancaria::setSaldo(float _saldoNuevo){
    if (_saldoNuevo <= 0){
        throw std::invalid_argument("el monto no puede ser menor a cero.");
    }
    return saldo = _saldoNuevo;
}
//Metodos
void cuentaBancaria::retirar(float _dineroRetirar){
    setSaldo(getSaldo() - _dineroRetirar);
}
void cuentaBancaria::depositar(float _dineroDepositar){
    setSaldo(getSaldo() + _dineroDepositar);
}


int main (){
    cuentaBancaria cta1 (-1000.30);
    
    std::cout <<"saldo actual: Bs" << cta1.getSaldo() << std::endl;

    cta1.depositar(388.70);
    std::cout << "luego de despostiar, su saldo es: bs" << cta1.getSaldo() << std::endl;

    cta1.retirar(164.60);
    std::cout << "luego de retirar, su saldo es de: Bs" << cta1.getSaldo() << std::endl;
    
  return 0;
}
