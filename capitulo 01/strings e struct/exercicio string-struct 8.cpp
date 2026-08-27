/*Crie uma struct Pessoa com nome e idade, leia os dados e exiba formatado. Usar getline*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Pessoa{
    int idade;
    string nome;
};


int main()
{
    Pessoa p;
    
    cout<<"insira o nome: ";
    getline(cin,p.nome);
    cout<<"insira a idade: ";
    cin>>p.idade;
    
    cout<<"---dados---\n";//formatação, alinhando a esquerda com 10 de espaço reservado(setw)
    cout<<left << setw(10) << "nome: "<<p.nome<<endl;
    cout<<left << setw(10) << "idade: "<<p.idade;
   

    return 0;
}