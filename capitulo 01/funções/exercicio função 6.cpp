/*6. Crie uma função que dobre o valor de um número inteiro usando passagem por referência.*/
#include <iostream>
using namespace std;

void dobrarNumero(int& x){
    
    x=x*2;//calculo do dobro alterando o original
    
}

int main()
{
   int num;
   
   cout << "insira o numero: ";
   cin >> num;
   
   dobrarNumero(num);//passagem por referencia
   
   cout<<"o dobro é "<<num;

    return 0;
}