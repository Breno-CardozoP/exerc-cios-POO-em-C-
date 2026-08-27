#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int contador = 0;

    cout << "digite seu nome completo: ";
    getline(cin, nome);

    for (char x : nome) {
        if (x != ' ') {//o espaço não aumenta o contador
            contador++;
        }
    }

    cout << "quantidade de caracteres (sem espacos): " << contador;

    return 0;
}