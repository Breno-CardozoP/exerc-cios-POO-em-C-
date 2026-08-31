/*exemplo função 2*/
#include <iostream>
using namespace std;

void dobrar(int& x) {
    
    x = x * 2; // altera o valor original
    
}

int main() {
    
    int num = 10;
    
    dobrar(num); // passa por referência
    
    cout << "Valor final: " << num << endl; // Saída: 20

return 0;
}