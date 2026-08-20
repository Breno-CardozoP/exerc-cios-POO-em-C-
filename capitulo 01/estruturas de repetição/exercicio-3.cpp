//exibir a tabuada de 1 a 10
#include <iostream>
using namespace std;
int main()
{
    int tabuada[11][11];
    int i;
    int j;
    
    //criar a matriz multiplicando um indice pelo outro, com o j multiplicando todos os numeros pelo indice i criando a tabuada
    for(i=0;i<11;i++){
        for(j=0;j<11;j++){
            tabuada[i][j]=i*j;
        }
    }
    
    //imprimindo a matriz
    for(i=1;i<11;i++){
        for(j=1;j<11;j++){
            cout<<tabuada[i][j]<<" ";
            if(j==10){
                cout<<endl;
            }
            
        }
    }
    
    

    return 0;
}
