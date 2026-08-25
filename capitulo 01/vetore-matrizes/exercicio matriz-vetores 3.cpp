//ler 15 valores e mostrar os impares
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num,contador=0;
    vector<int> numeros = {};
    
    cout<<"insira: ";
    for (int i = 0; i < 15; i++) {
        cin>>num;
        
        numeros.push_back(num);
    }
    
    for (int x : numeros) {
        if(x%2!=0){
            contador++;
        }
    }
    
    cout<<contador;
    return 0;
}