//criar um triangulo de asteristicos com N linhas
#include <iostream>
using namespace std;
int main()
{
    int N,i,j,z;
   
    
    cout<<"insira a quantidade de linhas do triangulo: \n";
    cin>>N;
    
    //loop para criar o triangulo: j precisa ser <= a i para que a quantidade de colunas(*) aumente a cada linha
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    

    return 0;
}