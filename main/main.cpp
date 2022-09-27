#include <cstdlib>
#include <iostream>
#include "example.h"
using namespace std;
#define NMAX 10

int main(int argc, char** argv)
{
    int array[10];
    int numero_masalto;
    int numero_masbajo;
    int i;
   
    std::cout << "Ingrese los numeros para calcular el maximo y el minimo del 1 al 20";
    for ( i = 0; i < NMAX; i++)
    {
        std::cin >> array[i];


    }
    
    numero_masalto = maximo(array);
    numero_masbajo= minimo(array);
    std::cout << "El numero mas alto " << numero_masalto;
    std::cout << "El numero mas bajo " << numero_masbajo;

    

    return 0;
}
