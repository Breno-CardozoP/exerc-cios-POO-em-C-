#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> m = {{1, 2}, {3, 4}, {5, 6}};

    for (vector<int> row : m) {    // linha por linha
        for (int x : row) {       // elemento por elemento
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}