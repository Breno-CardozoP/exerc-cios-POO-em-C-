//imprimir quantidade de numeros positivos até digitar o negativo
#include <iostream>
using namespace std;
int main()
{
    int num,contador=0;
    
    //insirir os numeros, contar a quantidade e sair se for negativo 
    cout<<"insira numeros(negativo para sair): \n";
    while (num>0){
        cin>>num;
        if(num<0){
            break;
        }
        contador++;
    }
    
    cout<<"\nquantidade de numeros positivos: "<<contador;

    return 0;
}