//Crie uma matriz 4x4 de inteiros e calcule a soma dos elementos da diagonal principal.
#include <iostream>
#include<vector>
using namespace std;
const int TAMANHO=4;
int main()
{
    int num,soma=0;
    vector<vector<int>> matriz(TAMANHO,vector<int> (TAMANHO));
    
    //preenchendo a matriz
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            cin >> matriz[i][j];
            //soma dos elementos da diagonal
            if(i==j){
                soma+=matriz[i][j];
            }
        }
    }
    cout<<"soma das diagonais: "<<soma;
}