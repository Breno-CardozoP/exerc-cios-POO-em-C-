//Crie uma matriz 3x3 de inteiros. Leia os valores do usuário e exiba a soma total de todos os elementos.
#include <iostream>
using namespace std;
int main()
{
    int matriz[3][3],soma=0;
    
    //prenchendo a matriz
    cout<<"insira numeros de 0 a 9: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"insira o valor("<<i<<")"<<"("<<j<<"): ";
            cin>>matriz[i][j];
            
            soma+=matriz[i][j];//soma dos valores
        }
    }
    cout<<"soma: "<<soma;
}