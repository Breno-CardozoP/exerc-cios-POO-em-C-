/*Crie uma struct Produto com nome, preço e quantidade. Calcule e exiba o valor total em estoque. Usar função getline*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Produto{
    string nome;
    float preço;
    int quantidade;
};
int main()
{
    Produto p;
    int codigo;
    float valorTotal=0;
    bool w=true, encontrado=false;;
    
    vector<Produto> estoque;
    
    
    //menu
    while(w){
        cout<<"(1)adicionar pruduto"<<endl;
        cout<<"(2)ver estoque"<<endl;
        cout<<"(3)sair"<<endl;
        cin>>codigo;
        cin.ignore();
        
        switch(codigo){
            case 1://adicionar ao estoque
                cout<<"---adicionando Produto---\n";
                cout<<"insira o nome: ";
                getline(cin,p.nome);
                cout<<"insira o preço: ";
                cin>>p.preço;
                cin.ignore();
                cout<<"insira a quantidade: ";
                cin>>p.quantidade;
                cin.ignore();
                
                for (int i = 0; i < estoque.size(); i++) {
                    if (estoque[i].nome == p.nome) {//verificar se ja esta presente no estoque, se ja estiver apenas soma a quantidade
                        estoque[i].quantidade += p.quantidade;
                        encontrado = true;
                        break;
                    }
                }
                if (encontrado==false) {//se não estiver adiciona o novo produto
                    estoque.push_back(p);
                }
                
                
                break;
            case 2:
                cout<<"---estoque--\n";//imprimir o estoque
                for (Produto item : estoque) {
                    cout<<"nome: "<<item.nome<<endl;
                    cout<<"preço: "<<item.preço<<endl;
                    cout<<"quantidade: "<<item.quantidade<<endl;
                    cout<<endl;
                    
                    valorTotal += item.preço * item.quantidade;//calculo do valor total
                    
                }
                cout << "valor total em estoque: " << valorTotal << endl;//imprimir o valor total
                break;
                
                //sair do programa
            case 3: w=false;
                
            default:w=false;
            
        }
    }
    
    return 0;
}