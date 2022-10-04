/******************************************************************************

Exerc�cio:Implemente um c�digo que tenha uma classe avi�o com os dados p�blicos 
de velocidade m�xima, tipo e com um procedimento de inicializa��o que retorne 
se tipo 1 = velocidade m�xima � de 100 e tipo planador; se tipo 2 = velocidade 
m�xima � de 200 e tipo monomotor; se tipo 3 = velocidade m�xima � de
300 e tipo jato. E imprima a informa��o para o usu�rio no c�digo principal.

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
