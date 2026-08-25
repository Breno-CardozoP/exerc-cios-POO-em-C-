#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;

    // Insere elementos
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    // Imprimindo
    for (int x : numeros) {
        cout << x << " ";
    }

    return 0;
}