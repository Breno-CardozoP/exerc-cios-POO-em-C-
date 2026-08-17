//calcular a media aritmetica
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num,soma=0;
    float media;
    
    cout<<"insira 3 numeros para o calculo da media: ";
    //estrutura de repetição para somar as notas
    for(int i=0;i<3;i++){
    cin>>num;
    soma+=num;
    }
    media=soma/3;//calculo da media
    
    cout<<"media: "<<fixed<<setprecision(2)<<media<<endl;

    return 0;
}