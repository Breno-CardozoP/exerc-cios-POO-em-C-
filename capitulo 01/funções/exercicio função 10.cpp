/*10. Crie uma struct ContaBancaria com titular e saldo. A struct deve ter um método para 
depósito. Leia os dados,
deposite um valor usando uma função com passagem por referência e exiba o saldo final.*/
#include <iostream>
#include <string>
using namespace std;

struct ContaBancaria{//struct conta
    string titular;
    float saldo;
    
    void depositar (float& x ,float y){//metodo de deposito
        x+=y;
    }
};


int main()
{
    float valor;
    ContaBancaria conta;
    
    cout<<"---insira suas informações---"<<endl;
    cout<<"titular: ";
    cin>>conta.titular;
    cout<<"saldo: ";
    cin>>conta.saldo;

    cout<<"quanto deseja depositar?";
    cin>>valor;
    
    conta.depositar(conta.saldo,valor);//passar por referência
    
    cout<<"saldo final: "<<conta.saldo;
    

    return 0;
}