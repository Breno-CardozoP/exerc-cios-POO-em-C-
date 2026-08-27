//Leia os dados de 3 alunos (nome e nota) e exiba os que tiraram nota >= 7. Usar função getline e cin.ignore
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct aluno {
    string nome;
    int nota;
};

int main() {
    vector<aluno> alunos;//vetor para guardar as informações individuais dos 3 alunos
    aluno a;

    for (int i = 0; i < 3; i++) {
        
        cout << "\n--- aluno " << i + 1 << " ---\n";
        cout << "insira o nome: ";
        getline(cin, a.nome);
        
        cout << "insira a nota: ";
        cin >> a.nota;
        cin.ignore();//limpar o \n para n ficar no proximo getline
        
        alunos.push_back(a);//quarda as informações de nome e nota no vetor
    }

    cout << "\n--- alunos com nota >= 7 ---\n";
    for (aluno a : alunos) {
        if (a.nota >= 7) {//verifica a nota
            cout << a.nome << " - nota: " << a.nota << endl;
        }
    }

    return 0;
}