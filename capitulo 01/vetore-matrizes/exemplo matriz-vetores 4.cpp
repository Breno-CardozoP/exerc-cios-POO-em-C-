#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30};

    // Insere 15 na segunda posição (índice 1)
    numeros.insert(numeros.begin() + 1, 15);

    // Imprimindo
    for (int n : numeros) {
        cout << n << " ";
    }

    return 0;
}