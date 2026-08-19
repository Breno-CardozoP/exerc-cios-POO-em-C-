//soma de todos os numeros naturais de 1 a N
#include <iostream>
using namespace std;
int main()
{
    int N,resultado=0;
    
    cout<<"insira o valor de N: ";
    cin>>N;
    
    //indice começa no 1 e a cada loop é adicionado mais 1, somando seus valores a resultado a cada loop
    for(int i=1;i<=N;i++){
        resultado+=i;
    }
    
    cout<<"resultado: "<<resultado;

    return 0;
}