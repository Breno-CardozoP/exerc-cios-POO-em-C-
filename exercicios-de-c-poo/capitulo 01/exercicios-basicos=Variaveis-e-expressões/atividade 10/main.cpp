//transformar temperatura de celcios para Fahrenheit
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float temperatura,F;
    
    cout<<"insira a temperatura em *C: ";
    cin>>temperatura;
    
    //calculo
    F=temperatura * 9/5 + 32;
    
    cout<<fixed<<setprecision(1)<<F<<" Fahrenheit"<<endl;

    return 0;
}