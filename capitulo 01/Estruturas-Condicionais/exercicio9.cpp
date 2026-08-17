//verificar se os numeros formam um triangulo valido
#include <iostream>
using namespace std;
int main()
{
    int numero1,numero2,numero3;
    
    //leitura dos valores
    cout<<"insira os 3 numeros: ";
    cin>>numero1;
    cin>>numero2;
    cin>>numero3;
    
    //verificar se esta respeitando a regra(a soma de 2 lados precisa ser maior que o terceiro)
    if(numero1+numero2>numero3 || numero2+numero3>numero1 || numero1+numero3>numero2){
        cout<<"triangulo valido";
    }
    else{
        cout<<"triangulo invalido";
    }

    return 0;
}