/*2. Implemente uma função que converta temperaturas de Celsius para Fahrenheit. 
O usuário digita a temperatura
em Celsius e o programa exibe o valor em Fahrenheit.*/
#include <iostream>
using namespace std;

float converção(float& x){
    float tempFahre;
    
    tempFahre=(x*1.8) + 32;//formula da converção de Celsius para Fahrenheit
    
    return tempFahre;
}

int main()
{
    float temp;
    
    cout<<"insira a temperatura em Celsius: "<<endl;
    cin>>temp;
    
    cout<<"temperatura em Fahrenheit: "<<converção(temp);

    return 0;
}