//informar se é positivo ou negativo ou zero
#include <iostream>
using namespace std;
int main()
{
    int num;
    
    cout<<"insira o numero: ";
    cin>>num;
    
    //verificar positividade
    if(num>0){
        cout<<"\nnumero positivo";
    }
    else{
        if(num==0){
            cout<<"\nnumero igual a zero";
        }
        else{
            cout<<"\nnumero negativo";
        }
    }

    return 0;
}