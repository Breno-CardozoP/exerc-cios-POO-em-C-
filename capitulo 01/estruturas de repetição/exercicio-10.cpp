//ler 10 numeros e contar os positivos
#include <iostream>
using namespace std;
const int TAMANHO=2;
int main()
{
    int num[TAMANHO],contador=0;
    
    //preencher o vetor com 10 numeros
    cout<<"insira 10 numeros: ";
    for(int i=0;i<TAMANHO;i++){
        cin>>num[i];
    }
    
    //contar os positivos
    for ( int x : num) {
        if(x>0){
            contador++;
        }
    }
    
    cout<<"positivos: "<<contador;
    

    return 0;
}