//apresentar o sucessor e antecessor de um numero
#include <iostream>
using namespace std;
int main()
{
    int num,antecessor,sucessor;
    cout<<"insira o numero: ";
    cin>>num;
    
    //calculo
    antecessor=num - 1;
    sucessor=num++;
    
    cout<<"\nantecessor: "<<antecessor<<"\nsucessor: "<<sucessor<<endl;

    return 0;
}