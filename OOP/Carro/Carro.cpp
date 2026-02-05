#include <iostream>
#include "Carro.h"
#include <string>
using namespace std;

Carro::Carro(string placa, string modelo, double velocidade)
{
    this->placa = placa;
    this->modelo = modelo;
    this->velocidade = velocidade;
}

double Carro::acelerar(double valor)
{
    if (valor - this->velocidade <= 0)
    {
        printf("valor da aceleracao nao aceite!");
        return this->velocidade;
    }

    return this->velocidade += valor;
}

string Carro::getPlaca()
{
    return this->placa;
}

string Carro::getModelo()
{
    return this->modelo;
}

double Carro::getVelocidade()
{
    return this->velocidade;
}
