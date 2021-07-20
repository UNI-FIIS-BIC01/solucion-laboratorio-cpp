#include<iostream>
#include<string>

void ConvertirASoundex(std::string &apellido);
char ConvertirLetraACodigo(char letra);

int main() {
    std::string apellido = "";
    
    while (true) {
        std::cout << "Ingrese un apellido en ingles (!! para terminar): " << std::endl;
        std::cin >> apellido;

        if (apellido == "!!") {
            break;
        } 
        
        std::string codigo_soundex = apellido;
        ConvertirASoundex(codigo_soundex);
        std::cout << "El codigo Soundex para " << apellido << " es " << codigo_soundex << std::endl;
    }


    return 0;
}

void ConvertirASoundex(std::string &apellido) {
    apellido[0] = toupper(apellido[0]);

    for (int indice = 1; indice < apellido.length(); indice += 1) {
        apellido[indice] = ConvertirLetraACodigo(apellido[indice]);
    }

    int indice_actual = 1;
    char letra_anterior = apellido[0];
    while (indice_actual < apellido.length()) {

        char letra_actual = apellido[indice_actual];
        if (letra_actual == letra_anterior || letra_actual == '0' || letra_actual == '7') {
            apellido.erase(indice_actual, 1);
        } else {
            indice_actual += 1;
            letra_anterior = letra_actual;
        }
    }

    apellido.resize(4, '0');
}

char ConvertirLetraACodigo(char letra_apellido) {
    char letra = toupper(letra_apellido);
    char codigo = '7';

    if (letra == 'A' || letra == 'E'||  letra == 'I'||  letra == 'O'||  letra == 'U' || 
            letra == 'H'||  letra == 'W'||  letra == 'Y') {
        codigo = '0';
    } else if (letra == 'B' || letra == 'F'||  letra == 'P'||  letra == 'V') {
        codigo = '1';
    } else if (letra == 'C' || letra == 'G'||  letra == 'J'||  letra == 'K'||  letra == 'Q' || 
            letra == 'S'||  letra == 'X'||  letra == 'Z') {
        codigo = '2';
    } else if (letra == 'D' || letra == 'T') {
        codigo = '3';
    } else if (letra == 'M' || letra == 'N') {
        codigo = '4';
    } else if (letra == 'L') {
        codigo = '5';
    } else if (letra == 'R') {
        codigo = '6';
    }

    return codigo;
}
