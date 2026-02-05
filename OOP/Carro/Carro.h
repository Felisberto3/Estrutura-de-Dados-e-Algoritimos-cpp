#ifndef CARRO_H
#define CARRO_H
#include <string>

class Carro
{
private:
    std::string placa;
    std::string modelo;
    double velocidade;

public:
    Carro(std::string placa, std::string modelo, double velocidade);
    double acelerar(double valor);
    double getVelocidade();
    std::string getModelo();
    std::string getPlaca();
};

#endif