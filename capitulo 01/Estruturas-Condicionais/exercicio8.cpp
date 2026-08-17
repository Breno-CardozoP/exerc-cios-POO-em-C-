//identificar elegibilidade
#include <iostream>
using namespace std;
const int anoAtual=2026;
int main()
{
    int ano;
    
    cout<<"insira a idade: ";
    cin>>ano;
    
    if(anoAtual-ano>=16){
        cout<<"esta elegivel";
    }
    else{
        cout<<"esta inelegivel";
    }

    return 0;
}