//Bibliotecas
#include <iostream>
#include<locale.h>
using namespace std;

//setlocale(LC_ALL, "portuguese");

 //Precisam saber utilizando a posições do vetor o nome do produto,preço do produto, 
  //realizar o cálculo do preço do produto-800,depois saber se é Maior ou Menor a
  //R$1200 o resultado da Subtração e no final Imprimir os dados do produtos e preços. 
    
int main()
{ 
  
    //Declaração das variáveis.
    
    int   n;
    int   i;
    int   Cal[3000];
    char  nomeProduto[20];
    float precoProdutos[3000];
    
    
    cout<<"Informa quantas vezes vai repetir para digitar\n";//Entrada de dado.
    cin>>n;                                                //Saída de dado.
    cout<<"\n\n";
     
    //Utilizar o Laço de Repetição (for) para informa os itens necessários,
    //depois o cálculo e validação se é Menor a 1200 ou Maior que 1200
    //o resultado.
    for(i=0;i<=n;i++){
    
      
     cout<<"Informa o nome do produto\n";//Entrada de dado. 
     cin>>nomeProduto[i];                //Saída de dado.

     
     cout<<"Informe os preço dos produtos comprados\n";//Entrada de dado.  
     cin>>precoProdutos[i];                            //Saída de dado.
     
     //Cálculo de Subtração.
     Cal[i]=precoProdutos[i]-800;
     //Validação de resultado do cálculo é Menor ou Maior que R$1200.
     if(Cal[i]<=1200){
        
        //Imprimir a mensagem caso é menor; 
        cout<<"\nO valor é menor que R$1200 equivalente:R$"<<Cal[i];  
         
     }else if(Cal[i]>=1200){
         //Imprimir a mensagem caso é maior.
         cout<<"\nO valor é maior que R$1200 equivalente:R$"<<Cal[i];  
         
         
     } 
     
     //Imprimir os dados.
     
      cout<<"\nO nome do produto-"<<nomeProduto[i];
      cout<<"\nO preço do produto:R$"<<precoProdutos[i];
      cout<<"\n\n";
     
     
     
     
    }

    return 0;
}
