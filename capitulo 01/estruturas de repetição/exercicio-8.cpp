//calcular a media de uma turma
#include <iostream>
using namespace std;
int main()
{
    int num,notas,soma=0,media,codigo;
    
    //while para imprimir o menu e sair caso 0
    while(codigo!=0){
        
        cout<<"(1)quantidade de alunos\n(2)inserir notas\n(3)ver media\n(0)sair\n";
        cin>>codigo;
        
            //verificar a opção escolhida e ler as informações para o calculo da media
            switch(codigo){
            
            case 1:
                cout<<"---insira a quantidade de alunos---\n";
                cin>>num;
                break;
            
            case 2: 
                cout<<"---insira as notas---\n";
                for(int i=0;i<num;i++){
                    cin>>notas;
                    soma+=notas;
                }
                media=soma/num;
                break;
            
            case 3:
                cout<<"---media---\n";
                cout<<"media da turma: "<<media<<endl;
                break;
            
        }
    }
    
    

    return 0;
}