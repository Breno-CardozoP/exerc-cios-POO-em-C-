/*Escreva um programa que leia números reais em um vector<float> até que o usuário digite um valor negativo. 
Ao final, exiba a média dos valores lidos (desconsidere o negativo).*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    float num,soma=0,media;
    vector<float> numeros;
    
    cout<<"insira os numeros e negativo para sair: ";
    //loop para ler os numeros e inserir no vetor
    while(true){
        cin>>num;
        if(num<0){
            break;
        }
        soma+=num;
        numeros.push_back(num);
    }
    media=soma/numeros.size();//calculo da media
    
    cout<<"media: "<<media;

    return 0;
}