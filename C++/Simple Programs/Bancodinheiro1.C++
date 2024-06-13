
//Bibliotecas
 
#include <iostream>
#include<locale.h>
using namespace std;

//setlocale(LC_ALL, "portuguese");


//Criar com a entrada de dado e saída de dado para depositar dinheiro na Conta Bancária e somar o quantos ficou no final.



int main()
{
    
    
    //Declaração das variáveis.
   int   chamada;
   float dinheiro;
   float dinheiro1;
   float CAL=0;
 
   
    cout<<"Informe seu número de chamada na fila de espera.\n";//Entrada de dado.
    cin>>chamada;                                             //Saída de dado.
    
    
    cout<<"\nInforme quantos dinheiros deseja depositar no máximo R$10.000.\n";//Entrada de dado.
    cin>>dinheiro;                                                          //Saída de dado.
    
    
    cout<<"\nInforme o que mais deseja depositar de quantia.\n";//Entrada de dado.
    cin>>dinheiro1;                                           //Saída de dado.
    
    
      //Cálculo da soma dos dinheiros digitados.  
     CAL=dinheiro+dinheiro1;
      

    //Imprimir os resultados finais de tudo.    
    cout<<"\nO número de chamada seu foi na fila.\n"<<chamada;
    cout<<"\n\n";
    cout<<"\nDinheiro depositado até R$10.000.\n"<<dinheiro;
    cout<<"\n\n";
    cout<<"\nOutro dinheiro armazenado.\n"<<dinheiro1;
    cout<<"\n\n";
    cout<<"\nArmazenou mais dinheiro.";
    cout<<"\nO valor atual da soma em Reias R$\n"<<CAL;
    cout<<"\n\n";
    cout<<"\nFinalização do depósito na sua conta do Banco.";
    


    return 0;
}
