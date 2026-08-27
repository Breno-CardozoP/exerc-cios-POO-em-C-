/*Leia uma palavra e verifique se é um palíndromo*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palavra,invertida="";;
    int contador=0;
    
    cout<<"insira a palavra: ";
    getline(cin,palavra);
    
    
    for (int j = palavra.length()- 1; j >= 0; j--) {//-1 para começar no ultimo indice valido(0-2 invez de 3)
            invertida += palavra[j];//adiciona os caracteres de traz pra frente
    }
    
    if(palavra.compare(invertida)==0){//compara a igualdade
        cout<<"é um palindromo";
    }else{
        cout<<"não é palindromo";
    }
    
    
    

    return 0;
}