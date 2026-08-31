/*9. Faça uma função que receba um número inteiro e incremente ele em 1 (por referência).*/
#include <iostream>
using namespace std;

void incrementar(int& x){
    x++;//incrementar
}

int main()
{
    int num;
    
    cout<<"insira o numero a ser incrementado: "<<endl;
    cin>>num;
    
    incrementar(num);//passagem por referencia
    
    cout<<"numero incrementado: "<<num;

    return 0;
}