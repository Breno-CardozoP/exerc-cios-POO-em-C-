//exemplo for 1
#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v = (1,2,3);
    
    for (vector<int>::iterador it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    
    return 0;
}

