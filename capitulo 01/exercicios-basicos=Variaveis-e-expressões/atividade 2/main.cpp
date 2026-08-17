//imprimir numero com 3 casas decimais
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num;
    
    cout<<"insira um numero: ";
    cin>>num;
    
    //modificador de formatação fixed(força a notação decimal) e setprecision para especificar a quantidade de casas
    cout<<fixed<<setprecision(3)<<num<<endl;

    return 0;
}