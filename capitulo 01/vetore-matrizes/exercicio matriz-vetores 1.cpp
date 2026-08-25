//ler 10 numeros reais e apresentar a soma dos valores positivos
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int soma=0,numero;
    vector<int> num = {};
    
    for(int i =0; i<2;i++){
        cout<<"insira os numeros: ";
        cin>>numero;
        
        num.insert(num.begin() + i, numero);
        
        
        
    }
    
    for (int x : num) {
        
        if(x>0){
            soma+=x;
        }
    }
    
    
    cout<<soma;
   

    return 0;
}