/*3. Crie uma função que receba duas notas e retorne a média. 
O usuário informa duas notas e o programa mostra a
média final.*/
#include <iostream>
using namespace std;

float calculoMedia(float x,float y){
    
    return (x+y)/2;//calculo da media e seu retorno
}

int main()
{
    float nota1,nota2;
    
    cout<<"insira as duas notas: "<<endl;
    cin>>nota1;
    cin>>nota2;
    
    cout<<"media final: "<<calculoMedia(nota1,nota2);

    return 0;
}