//vetor com 6 numeros e media entre eles
#include <iostream>
using namespace std;
const int TAMANHO=6;
int main()
{
    int num[TAMANHO],soma=0,media;
    
    //preencher o vetor
    cout<<"insira os numeros: ";
    for(int i=0;i<TAMANHO;i++){
        cin>>num[i];
    }
    
    //calculo da media
    for (int x : num) {
        soma+=x;
        media=soma/TAMANHO;
    }
    
    cout<<"media: "<<media;
    
    

    return 0;
}