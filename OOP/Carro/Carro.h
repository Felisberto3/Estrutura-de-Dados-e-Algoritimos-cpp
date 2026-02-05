#ifndef CARRO_H
#define CARRO_H
#include <string>

class Carro
{
private:
    std::string placa;
    std::string modelo;
    double velocidade = 0.0;

public:
    Carro(std::string placa, std::string modelo, double velocidade);
    Carro(std::string placa, std::string modelo);
    double acelerar(double valor);
    double getVelocidade();
    double getParar();
    std::string getModelo();
    std::string getPlaca();
};

#endif