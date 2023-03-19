
//Bibliotecas

#include<iostream>
#include<locale.h>
using namespace std;


//setlocale(LC_ALL, "portuguese");



//Faça utilizando o for para encontrar o Maior e Menor número  informado e depois no final 
//imprimir o resultado.


int main()
{
   
   //Declaração das Variáveis.
   
    int i;
    int numero;
    int numeroP=0;
    int numeroS=1000;
    
    //Validação para repetição de 3 números  que vai ser informado e depois encontrar 
    //o Maior e Menor.
    for(i=0;i<3;i++){
    
    cout<<"Informa o numero";//Entrada de dado.
    cin>>numero;//Saída de dado.
        
      //Validação do Maior e Menor número informado na entrada de dado.  
      if(numero>numeroP){
          //Atribuição do Maior com número informado.
          numeroP=numero;
          
      }if(numero<numeroS){
          
          //Atribuição do Menor com número informado.
           numeroS=numero;
          
      } 
        
    } 
    
    //Imprimir o resultado final do Maior e Menor número.
      cout<<"\nO número Maior"<<numeroP;
      cout<<"\n\n";
      cout<<"\nO número Menor"<<numeroS;
    
      
   

    return 0;
}