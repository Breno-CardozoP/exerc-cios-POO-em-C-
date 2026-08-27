#include <strings>
#include <iostream>
using namespace std;
int main()
{
    string a1 = "c++";
    string a2 = "c++";
    string a3 = "java";

    cout<<"comparando a1 e a2:"<<a1.compare(a2)<<endl;
    cout<<"comparando a1 e a3:"<<a1.compare(a3)<<endl;

    return 0;
}