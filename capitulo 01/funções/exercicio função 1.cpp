/*1. Crie uma função que receba um número inteiro e retorne seu quadrado. 
O programa deve solicitar um número
ao usuário e exibir o resultado do quadrado.*/
#include <iostream>
using namespace std;

int função_quadrado(int x){
    int quadrado;
    
    quadrado=x*x;//quadrado do numero
    
    return quadrado;
    
}

int main()
{
    int num;
    
    cout<<"insira o numero: "<<endl;
    cin>>num;
    
    cout<<"quadrado = "<<função_quadrado(num);

    return 0;
}