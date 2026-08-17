//apresentar a divisão inteira e real
#include <iostream>
using namespace std;
int main()
{
    int inteira;
    float real,num;
    
    cout<<"insira o numero: ";
    cin>> num;
    
    //calculo com diferença em ser um float para a divisão real e int para a divisão inteira
    inteira=num/2;
    real=num/2;
    
    cout<<"resultado:\n"<<"divisão inteira: "<<inteira<<"\ndivisão real: "<<real<<endl;
    return 0;
}