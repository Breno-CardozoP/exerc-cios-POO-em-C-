//exibir o dia da semana correspondete ao numero
#include <iostream>
using namespace std
int main()
{
    int num;
    
    cout<<"insira o numero(1 a 7): ";
    cin >> num;
    
    //verificar se esta estre os 7 numeros
    if(num>7 || num<1){
        cout<<"numero invalido";
    }
    else{//imprimir o correspondente ao dia da semana
        switch(num){
            case 1:
                cout<<"domingo";
                break;
            case 2:
                cout<<"segunda";
                break;
            case 3:
                cout<<"terça";
                break;
            case 4:
                cout<<"quarta";
                break
            case 5:
                cout<<"quinta";
                break;
            case 6:
                cout<<"sexta";
                break;
            case 7:
                cout<<"sabado";
                break;
        }
    }

    return 0;
}