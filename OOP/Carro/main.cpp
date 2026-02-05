#include <iostream>
#include "Carro.h"
using namespace std;

int main(int argc, char const *argv[])
{
    printf("Ola mundo, como vao \n ");
    Carro c = Carro("XL10B", "XL", 0.0);

    cout << c.getModelo() << "\n ";
    cout << c.getPlaca() << "\n";
    cout << c.getVelocidade() << "\n ";

    return 0;
}
