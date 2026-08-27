/*Leia uma frase e conte quantas vogais possui. Use a função getline e tolower*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string frase;
    int contador=0;
    
    cout<<"insira a frase: ";
    getline(cin,frase);
    
    
    for (char x : frase) {
        x=tolower(x);//transformar os caracteres em minusculo e contar as vogais
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ){
            contador++;
        }
    }
    cout<<contador;

    return 0;
}