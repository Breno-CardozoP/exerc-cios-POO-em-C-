//menu interativo com 3 opções cada opção repete o menu menos uma que sai
#include <iostream>
using namespace std;
int main()
{
    int codigo;
    
    //imprimir o menu e repetir se for diferente de 0
    do{
        cout<<"(1)olá\n(2)tchau\n(0)sair\n";
        cin>>codigo;
        
        if(codigo!=1 && codigo!=2 && codigo!=0){
            cout<<"opção invalida";
        }
        
    }while(codigo!=0);
    
    return 0;
}