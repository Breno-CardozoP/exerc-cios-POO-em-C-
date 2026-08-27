/*Leia uma frase e conte quantas palavras ela possui. Usar getline*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string frase;
    int contador=1;//começa em 1 para contar a ultima palavra
    
    cout<<"insira a frase: ";
    getline(cin,frase);
    
    for (char x : frase) {
        if(x==' '){
            contador++;//contar a quantidade de espaços consequentemente a quantidade de palavras
        }
    }
    
    
    cout<<"quantidade de palavras: "<<contador;

    return 0;
}