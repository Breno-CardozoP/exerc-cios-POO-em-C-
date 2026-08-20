//vetor com 8 numeros e exibir os pares
#include <iostream>
using namespace std;
const int TAMANHO=2;
int main()
{
    int num[TAMANHO];
    
    //preencher o vetor
    cout<<"insira os numeros: ";
    for(int i = 0;i<TAMANHO;i++){
        cin>>num[i];
    }
    
    //exibir os pares
    cout<<"pares:";
    for (int x : num) {
        if(x % 2 == 0){
            cout<<"-"<<x;
        }
    }

    return 0;
}