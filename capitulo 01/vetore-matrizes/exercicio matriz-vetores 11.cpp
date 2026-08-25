/*Faça um programa que leia 10 números inteiros do usuário e armazene-os em um vector<int>. 
Em seguida, calcule e exiba a soma de todos os números positivos inseridos.*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int num,soma=0;
    vector<int> numeros;
    
    cout<<"insira numeros: ";
    for (int i = 0; i < 10; i++) {
        cin>>num;
        
        numeros.push_back(num);
        
        if(num>0){
            soma+=num;
        }
    }
    cout<<"soma dos positivos: "<<soma;
}