//escolher a operação e exibir o resultado escolhido
#include <iostream>
using namespace std;

int main()
{
    int codigo;
    float num1,num2,resultado;
    
    //painel de escolha
    cout<<"-----escolha a operação-----\n";
    cout<<"(1)-soma\n(2)-subtração\n(3)-multiplicação\n(4)-divisão\n";
    cin >> codigo;
    
    //vericar qual a operação selcionada e mostrar o resultado
    switch(codigo){
        case 1:
            cout<<"--insira os numeros--\n";
            cin >>num1>>num2;
            resultado=num1+num2;
            cout<<num1<<" + "<<num2<<" = "<<resultado;
            break;
        case 2:
            cout<<"--insira os numeros--\n";
            cin >>num1>>num2;
            resultado=num1-num2;
            cout<<num1<<" - "<<num2<<" = "<<resultado;
            break;
        case 3:
            cout<<"--insira os numeros--\n";
            cin >>num1>>num2;
            resultado=num1*num2;
            cout<<num1<<" x "<<num2<<" = "<<resultado;
            break;
        case 4:
            cout<<"--insira os numeros--\n";
            cin >>num1>>num2;
            resultado=num1/num2;
            cout<<num1<<" / "<<num2<<" = "<<resultado;
            break;
            
        default: cout <<"codigo invalido";
            
    }
    

    return 0;
}