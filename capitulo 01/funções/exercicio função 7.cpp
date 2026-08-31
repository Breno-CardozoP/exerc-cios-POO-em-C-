/*7. Crie uma função que troque os valores de duas variáveis usando passagem por referência.*/
#include <iostream>
using namespace std;

void trocarValores(int& x, int& y){
    int suporte;
    
    suporte=x;
    x=y;
    y=suporte;//inverter valores
    
}

int main()
{
    int num1,num2;
    
    cout<<"---insira 2 valores---"<<endl;
    cout<<"valor 1: "<<endl;
    cin>>num1;
    cout<<"valor 2: "<<endl;
    cin>>num2;
    
    trocarValores(num1,num2);//passar por referência
    
    cout<<"valor 1: "<<num1<<endl;
    cout<<"valor 2: "<<num2;
    
    return 0;
}