//Crie um programa que leia uma matriz 3x3 de inteiros e verifique se ela é simétrica (A[i][j] == A[j][i]).
#include <iostream>
#include<vector>
using namespace std;
const int TAMANHO=3;
int main()
{
    int num,contador=0;
    bool simétria=true;
    vector<vector<int>> matriz(TAMANHO,vector<int> (TAMANHO));
    
    //preenchendo a matriz
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            cin >> matriz[i][j];
            
        }
    }
    
    //verificar simetria
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if(matriz[i][j] != matriz[j][i]){//caso algum valor seja diferente a simetria se torna falsa
                simétria=false;
            }
            
        }
    }
    
    //imprimir a simetria
    if(simétria==true){
        cout<<"é simétrica.";
    }
    else{
        cout<<"não é simétrica."
    }
    
    
}