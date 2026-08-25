//inserir 5 numeros no vetor e apresentar invertido
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    vector<int> numeros={};
    
    cout<<"insira os numeros: ";
    for(int i=0;i<5;i++){
        cin>>num;
        
        //adicionar na primeira posição a cada ciclo,invertendo as posições
        numeros.insert(numeros.begin()+ 0, num);
    }
    
    for (int x : numeros) {
        cout<<x;
    }

    return 0;
}