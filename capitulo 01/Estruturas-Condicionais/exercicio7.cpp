//verificar aprovação de um aluno
#include <iostream>
using namespace std;

int main()
{
    float nota;
    
    cout<<"insira sua nota: ";
    cin>>nota;
    
    //verificar indice de aprovação
    if(nota>=60){
        cout<<"aprovado";
    }
    else if(nota<40){
        cout<<"reprovado";
    }
    else{
        cout<<"recupeção";
    }

    return 0;
}