//informar qual numero é maior
#include <iostream>
using namespace std;
int main()
{
    int num,maior=0;
    
    
    //estrutura de repetição para ler e comparar os numeros
    for(int i=0;i<3;i++){
        cout<<"insira os 3 numeros: ";
        cin>>num;
        
        //identificar o maior valor
        if(num>maior){
            maior=num;
        }
    }
    
    cout<<"o maior numero é: "<<maior<<endl;

    return 0;
}