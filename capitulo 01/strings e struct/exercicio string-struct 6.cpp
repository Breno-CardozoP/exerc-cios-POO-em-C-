//Leia duas strings e verifique se são iguais (sem usar ==). Usar funções getline e lenght
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    bool iguais = true;

    cout << "insira a primeira string: ";
    getline(cin, str1);

    cout << "insira a segunda string: ";
    getline(cin, str2);

    if (str1.length() != str2.length()) {//verifica se o tamanho das strings são diferentes
        iguais = false;
    } else {
        for (int i = 0; i < str1.length(); i++) {//se o tamanho for igual verifica se os caracteres da string são iguais
            if (str1[i] != str2[i]) {
                iguais = false;
            }
        }
    }

    if (iguais) {
        cout << "as strings sao iguais";
    } else {
        cout << "as strings sao diferentes";
    }

    return 0;
}