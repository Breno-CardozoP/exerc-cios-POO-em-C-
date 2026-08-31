/*4. Faça uma função que verifique se um número é par. 
O programa deve informar ao usuário se o número digitado
é par ou ímpar.*/
#include <iostream>
using namespace std;

bool paridade(int x){//verificar a paridade do numero e retornar true ou false
    if(x % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int num;
    
    cout<<"insira o numero: "<<endl;
    cin>>num;
    cin.ignore();
    
    //verifica o retorno e imprimi impar ou par
    cout<<"o numero "<<num<<" é "<<(paridade(num) ? "par" : "impar");
    

    return 0;
}