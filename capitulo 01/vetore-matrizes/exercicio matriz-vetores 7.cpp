/*Leia 12 números reais. Substitua todos os valores negativos por zero e exiba o vetor resultante.*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    double num;
    vector<double> numeros;
    
    cout<<"insira numeros de 0 a 9: ";
    for (int i = 0; i < 12; i++) {
        cin>>num;
        
        if(num<0){//verificar se são negativos e trocar
            num=0;
        }
        
        numeros.push_back(num);
    }
    
    for (int x : numeros) {
        cout<<" "<<x;
    }
    
}