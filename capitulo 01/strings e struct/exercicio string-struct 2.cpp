#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;

    cout << "insira a palavra: ";
    getline(cin, palavra);

    cout << "palavra invertida: ";
    //imprime os caracteres da palavra do ultimo para o primeiro
    for (int i = palavra.length(); i >= 0; i--) {
        cout << palavra[i];
    }

    return 0;
}