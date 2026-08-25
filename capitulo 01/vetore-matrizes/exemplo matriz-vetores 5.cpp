#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30};

    // Cria vetor com elementos novos
    vector<int> outros = {40, 50};

    // Insere elementos de outros no final de numeros
    numeros.insert(numeros.end(), outros.begin(), outros.end());

    // Imprime resultado
    cout << "Conteudo do vetor numeros: ";
    for (int n : numeros) {
        cout << n << " ";
    }

    cout << endl;
    return 0;
}