//somar todos as valores de um vetor de 5 numeros
#include <iostream>
using namespace std;
const int TAMANHO=5;//contante TAMANHO maximo

int main()
{
    int soma=0,vetor[TAMANHO];
    
    //preenchendo o vetor
    for(int i=0;i<TAMANHO;i++){
        cout<<"insira 5 numeros: ";
        cin >> vetor[i];
    }
    
    //realizando a soma
    for (int x : vetor) {
        soma+=x;
    }
    
    cout<<"soma: "<<soma;
    

    return 0;
}