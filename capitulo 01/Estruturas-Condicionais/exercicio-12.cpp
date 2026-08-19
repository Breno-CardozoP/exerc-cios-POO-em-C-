//imformar se é uma vogal
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char caracter;
    
    cout<<"insira o caracter: ";
    cin >> caracter;
    
    toupper(caracter);
    
    if(caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U'){
        cout << caracter <<"é vogal";
    }
    else{
        cout<< caracter << "não é vogal";
    }
   

    return 0;
}