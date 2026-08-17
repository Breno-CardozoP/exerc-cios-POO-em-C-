//tranformar caracter em seu semelhante no codigo ASCII
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"insira o caracter: ";
    cin>>c;
    
    //forçar a modificação de uma variavel de char para int transforma automaticamente o caracter para seu codigo
    cout<<"\nno codigo ASCII: "<<(int)c<<endl;

    return 0;
}