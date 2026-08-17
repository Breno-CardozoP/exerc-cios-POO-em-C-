//somar e imprimir resultado
#include <iostream>

using namespace std;

int main() {
    int num1,num2,resultado;

    cout <<"digite dois numeros para serem somados: ";
    cin >> num1,num2;
    
    //operação
    resultado = num1+num2;

    cout<< "Soma: "<<num1 "+"<<num2 "="<<resultado<<endl;
    
    return 0;
}