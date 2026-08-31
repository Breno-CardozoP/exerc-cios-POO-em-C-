/*5. Crie uma struct Pessoa com nome e idade, e um método que exiba uma saudação personalizada.
Leia os dados de uma pessoa, e use o método para exibir a mensagem.*/
#include <iostream>
#include <string>
using namespace std;

struct pessoa{
    string nome;
    int idade;
};

string saudaçãoPersonalizada(pessoa x){//saudação personalizada(cada um com um nome diferente)
    
    return x.nome;
    
}


int main()
{
    pessoa p;
    
    cout<<"insira seu nome: ";
    cin>>p.nome;
    cout<<"insira sua idade: ";
    cin>>p.idade;
    cin.ignore();
    
    cout<<"bem vindo "<<saudaçãoPersonalizada(p);//retornar a saudação
    
    return 0;
}