//ler 8 valores no vetor calcular a media e verificar quais estão acima
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num,soma=0,contador=0;
    float media;
    
    cout<<"insira: ";
    vector<int> numeros;
    for (int i = 0; i < 8; i++) {
        cin>>num;
        
        numeros.push_back(num);
        
        //calculo da media
        soma+=num;
    }
    media=soma/8.0;//8.0 para forçar uma divisão decimal
    
    for (int x : numeros) {
        if(x>media){
            contador++;
        }
        
    }
    
    cout<<"acima: "<<contador;

    return 0;
}