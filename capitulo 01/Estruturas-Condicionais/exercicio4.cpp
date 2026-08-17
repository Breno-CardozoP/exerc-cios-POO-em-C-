//informar se é multiplo de 5
#include <iostream>
using namespace std;
int main()
{
    int num;
    
    cout<<"insira o numero: ";
    cin>>num;
    
    if(num % 5 == 0){
        cout<<"é multiplo.";
    }
    else{
        cout<<"não é multiplo.";
    }

    return 0;
}