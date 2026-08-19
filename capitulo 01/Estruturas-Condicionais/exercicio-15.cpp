//descrever uma operação matematica
#include <iostream>
using namespace std;
int main()
{
    char caracter;
    
    cout<<"insira o caracter: ";
    cin >>caracter;
    
    //apresentar a operação correspondente
    switch(caracter){
        case '+': cout<<"operação de soma";
            break;
        case '-': cout<<"operação de subtração";
            break;
        case '*': cout<<"operação de multiplicação";
            break;
        case '/': cout<<"operação de divisão";
            break;
        default: cout<<"operação invalida";
    }

    return 0;
}