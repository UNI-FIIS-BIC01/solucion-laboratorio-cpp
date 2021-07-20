#include <iostream>

bool EsNumeroPerfecto(int numero);

int main() {
 
    for (int numero = 1; numero <= 10000; numero += 1) {
        if (EsNumeroPerfecto(numero)) {
            std::cout << numero << std::endl;
        }
    }
    return 0;
}

bool EsNumeroPerfecto(int numero) {
    int suma_divisores = 0;

    for (int candidato = 1; candidato < numero; candidato += 1) {
        
        if (numero % candidato == 0) {
            suma_divisores += candidato;
        }
    }

    if (suma_divisores == numero) {
        return true;
    }

    return false;
}