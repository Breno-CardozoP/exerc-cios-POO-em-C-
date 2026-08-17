//informar se é positivo ou negativo
#include <iostream>
using namespace std;
int main()
{
    int num;
    
    cout<<"insira o numero: ";
    cin>>num;
    
    if(num>0){
        cout<<"numero positivo.";
    }
    else{
        cout<<"numero negativo.";
    }

    return 0;
}