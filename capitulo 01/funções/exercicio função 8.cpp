/*8. Uma função deve calcular a média de 3 valores e armazenar 
o resultado em uma variável passada por
referência.*/
#include <iostream>
using namespace std;

void calculoMedia(float x,float y,float z,float& m){
    m = (x+y+z)/3;
}

int main()
{
    float nota1,nota2,nota3,media;
    
    cout<<"insira as 3 notas: "<<endl;
    cin>>nota1;
    cin>>nota2;
    cin>>nota3;
    
    calculoMedia(nota1,nota2,nota3,media);
    
    cout<<"media = "<<media;
    
    
    

    return 0;
}