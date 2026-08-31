/*exemplo função 1*/
#include <iostream>
using namespace std;

void dobrar(int x) {
    
    x = x * 2; // modifica apenas a cópia

}

int main() {
        
    int num = 10;
    
    dobrar(num); // passa por valor
    
    cout << "Valor final: " << num << endl; // Saída: 10
    
    return 0;
}