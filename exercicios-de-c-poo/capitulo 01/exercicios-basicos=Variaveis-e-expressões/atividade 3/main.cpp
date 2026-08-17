//apresentar quantos segundos tem em um dia
#include <iostream>
using namespace std;

const int horas=24;//contante do numero de horas
int main()
{
    int dias,segundos;
    cout<<"insira a quantidade de dias que deseja-se ver em segundos: ";
    cin>>dias;
    
    //calculo
    segundos=dias*horas*60*60;
    
    cout<<"segundos: "<<segundos<<endl;

    return 0;
}