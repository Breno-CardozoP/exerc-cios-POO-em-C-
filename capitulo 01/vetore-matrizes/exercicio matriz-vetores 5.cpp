//Crie um programa que leia 10 números entre 0 e 9 e mostre quantas vezes cada número apareceu.
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int num,contador,atual;
    vector<int> numeros;
    
    cout<<"insira numeros de 0 a 9: ";
    for (int i = 0; i < 10; i++) {
        cin>>num;
        if(num>9 || num<0){
            cout<<"numero invalido.";
            break;
        }
        
        numeros.push_back(num);
    }
    
    //mostrar quantas vezes cada um apareceu
    for (int x : numeros) {
        contador=0;
        //verificar se tem valores iguais e contar quantas vezes acontece
        for (int y : numeros) {
            if(y==x){
                contador++;
            }
            
        }//imprimir apenas se o proximo valor não for igual
        if(atual!=x){
            cout<<"\n"<<x<<" apareceu "<<contador<<" vezes"<<endl;
        }
       atual=x;
    }
    
    
    

    return 0;
}