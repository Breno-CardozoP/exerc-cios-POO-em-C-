//calculo da area de um circulo
#include <iostream>
#include<iomanip>
using namespace std;
const float pi=3.14;//constante do valor de pi
int main()
{
    float raio,area;
    cout<<"insira a raio do circulo que se deseja calcular: ";
    cin>>raio;
    
    //calculo
    area=pi*raio*raio;
    
    cout<<"area do circulo: "<<fixed<<setprecision(2)<<area<<endl;

    return 0;
}