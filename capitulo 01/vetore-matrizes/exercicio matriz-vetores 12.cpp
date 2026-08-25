/*Crie um programa que leia 8 números inteiros em um vector<int> e depois peça ao usuário um número a ser buscado. 
Informe se o número está presente ou não no vetor.*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    bool presença=false;
    vector<int> numeros;
    
    cout<<"insira os numeros: ";
    for (int i = 0; i < 8; i++) {
        cin>>num;
        
        numeros.push_back(num);
    }
    
    cout<<"\ninsira o numero a ser buscado: ";
    cin>>num;
    for (int x : numeros) {
        if(x==num){//se o numeros estiver presente retorna true
            presença=true;
        }
    }
    //imprimir se esta ou não presente
    if(presença==true){
        cout<<num<<" esta presente no vetor";
    }
    else{
        cout<<num<<" não esta presente no vetor";
    }
    
    return 0;
}