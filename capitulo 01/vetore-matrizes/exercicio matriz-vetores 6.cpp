//Crie dois vetores de 5 elementos inteiros e calcule o produto escalar entre eles. Exiba o resultado.
#include <iostream>
#include<vector>
using namespace std;
const int TAMANHO=5;
int main()
{
    int num,produto=0;
    vector<int> numeros1;
    vector<int> numeros2;
    
    cout<<"preencha o primeiro vetor: ";
    for (int i = 0; i < TAMANHO; i++) {
        cin>>num;
        
        numeros1.push_back(num);
    }
    
    cout<<"preencha o segundo vetor: ";
    for (int i = 0; i < TAMANHO; i++) {
        cin>>num;
        
        produto+=numeros1[i]*num;//calcular o produto escalar
        
        numeros2.push_back(num);
    }
    
    cout<<"resultado: "<<produto;
}