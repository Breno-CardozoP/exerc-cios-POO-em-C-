/*Leia uma frase e substitua todos os espaços por underline. Usar função getline e for-each*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string frase,NovaFrase="";
    
    cout<<"insira a frase: ";
    getline(cin,frase);
    
    for (char x : frase) {//se o caracter for um espaço adiciona um underline na nova frase
        if(x==' '){
            NovaFrase.push_back('_');
        }else{
            NovaFrase.push_back(x);
        }
        
    }
    
    cout<<"frase modificada: "<<NovaFrase;

    return 0;
}