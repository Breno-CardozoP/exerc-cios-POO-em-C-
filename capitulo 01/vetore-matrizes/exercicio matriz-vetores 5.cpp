#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> contagem(10, 0);
    int num;

    cout << "insira numeros de 0 a 9: ";
    for (int i = 0; i < 10; i++) {
        cin >> num;

        if (num > 9 || num < 0) {
            cout << "numero invalido.";
            return 0;
        }

        contagem[num]++;//utiliza o numero como indice e sempre que esse numero é adicionado a contagem em seu indice aumenta(exemplo se digitar 3 a posição tres aumenta 1)
    }

    for (int i = 0; i < 10; i++) {
        cout << "\n" << i << " apareceu " << contagem[i] << " vezes";
    }

    return 0;
}
