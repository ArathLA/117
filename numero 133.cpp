#include <iostream>

int main() {
    // Definir cuántas veces se repetirá el mensaje
    int repeticiones = 5;

    // Utilizar un bucle for para imprimir "Hola Mundo" varias veces
    for (int i = 0; i < repeticiones; ++i) {
        std::cout << "Hola Mundo " << i + 1 << std::endl;
    }

}
