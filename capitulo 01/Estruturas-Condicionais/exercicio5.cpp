//informar se é maior ou menor de idade
#include <iostream>
using namespace std;
const int MAIORIDADE=18;
int main()
{
    int idade;
    
    cout<<"insira a idade: ";
    cin>>idade;
    
    if(idade>MAIORIDADE){
        cout<<"é maior.";
    }
    else{
        cout<<"é menor";
    }

    return 0;
}