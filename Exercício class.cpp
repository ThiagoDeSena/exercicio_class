/******************************************************************************

Exercício:Implemente um código que tenha uma classe avião com os dados públicos 
de velocidade máxima, tipo e com um procedimento de inicialização que retorne 
se tipo 1 = velocidade máxima é de 100 e tipo planador; se tipo 2 = velocidade 
máxima é de 200 e tipo monomotor; se tipo 3 = velocidade máxima é de
300 e tipo jato. E imprima a informação para o usuário no código principal.

*******************************************************************************/
#include <iostream>

using namespace std;

class Aviao
{
  public:
    int velocidade_max;
    string tipo;
    void ini(int tp);
};

void Aviao::ini(int tp){
    if(tp==1){
        velocidade_max=100;
        tipo="planador";
    }if(tp==2){
        velocidade_max=200;
        tipo="monomotor";
    }if(tp==3){
        velocidade_max=300;
        tipo="jato";
    }
}

int main()
{
    Aviao av1;
    int t;
    cout<<"Escolha o tipo de aviao: "<<endl;
    cout<<"(1) - Planador"<<endl;
    cout<<"(2) - Monomotor"<<endl;
    cout<<"(3) - Jato"<<endl;
    cin>>t;
    
    av1.ini(t);
    
    cout<<"Tipo: "<<av1.tipo<<endl<<"Velocidade Maxima: "<<av1.velocidade_max;
    

    return 0;
}
