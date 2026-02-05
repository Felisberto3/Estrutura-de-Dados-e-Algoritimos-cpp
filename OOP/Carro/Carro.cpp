#include <iostream>
#include "Carro.h"
#include <string>
using namespace std;

Carro::Carro(string placa, string modelo)
{
    this->placa = placa;
    this->modelo = modelo;
}
Carro::Carro(string placa, string modelo, double velocidade)
{
    this->placa = placa;
    this->modelo = modelo;
    this->velocidade = velocidade;
}

double Carro::acelerar(double valor)
{

    if ((valor < 0) && (valor * (-1)) > this->velocidade)
    {
        printf("valor da aceleracao nao aceite!");
        return this->velocidade;
    }
    cout << "\nAcelerado com sucesso \n Nova Velocidade é " << (this->velocidade += valor);

    return this->velocidade;
}

double Carro::getParar()
{
    return this->velocidade = 0.0;
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
