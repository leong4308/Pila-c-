#include <iostream>
#include <vector>
#include <string>

//#include "pilaleneal.h"

int main()
{
    const int capacidad = 10;
    std::vector<int> elementos(capacidad);
    std::cout << "Tecla elemento de la pila (termina con -1)\n";

    int cima = -1;
    int x = 0;
    const int CLAVE = -1;

    while (x != CLAVE) // Usar != en lugar de =
    {
        std::string entrada;
        std::cin >> entrada;

        try {
            x = std::stoi(entrada); // Convertimos de Cadena a entero (String to int)

            if (cima < capacidad - 1) {
                cima++;
                elementos[cima] = x;
            }
            else {
                std::cout << "Pila Llena\n";
                break;
            }
        }
        catch (const std::invalid_argument&) {
            std::cout << "Entrada no válida\n";
        }
    }

    if (cima >= 0) {
        std::cout << "Elementos de la pila\n";
        while (cima >= 0) {
            x = elementos[cima];
            cima--;
            std::cout << x << "\n"; // Agregado "\n" para imprimir en líneas separadas
        }
    }
    else {
        std::cout << "Pila vacía\n";
    }

    return 0;
}
  
    