#include <iostream>
#include <string>
#include "Carro.h"
using namespace std;

int main(int argc, char const *argv[])
{
    string modelo;
    string placa;

    cout << "Informe o modelo do carro: ";
    cin >> modelo;
    cout << "Informe o modelo do placa: ";
    cin >> placa;
    Carro carro = Carro(modelo, placa);

    while (1)
    {
        int escolha = 0;
        cout << "\n\tO que pretendes: \n";
        cout << "\t1-Acelerar \n";
        cout << "\t2-ver a velocidade \n";
        cout << "\t3-Parar o carro \n";
        cout << "\t4-Ver o modelo \n";
        cout << "\t5-Ver a placa \n";
        cout << "\t0-Sair \n";
        cin >> escolha;

        switch (escolha)
        {
        case 1:
            double novaVelocidade;
            cout << "Informa a velocidade nova: ";
            cin >> novaVelocidade;
            carro.acelerar(novaVelocidade);
            break;
        case 2:
            cout << "\n Actual Velocidade e: " << carro.getVelocidade() << "Km/h";
            break;
        case 3:
            carro.getParar();
            cout << "\n Carro Parrou com Sucesso!\n ";
            break;
        case 4:
            cout << "\n O Modelo do seu carro e: " << carro.getModelo();
            break;
        case 5:
            cout << "\n A placa deste carro e: " << carro.getPlaca();
            break;
        case 0:
            escolha = 0;
            cout << "Foi bom estar consigo!" << endl;
            break;
        default:
            cout << "Escolha errada \n Tente novamente! \n ";
            break;
        }
        if (escolha == 0)
        {
            break;
        }
    }

    return 0;
}
