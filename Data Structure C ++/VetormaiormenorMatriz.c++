//Bibliotecas 
#include<iostream>
#include<locale.h>
using namespace std;


//setlocale(LC_ALL, "portuguese");

//Realizar duas matrizes 2x2,imprimindo e cálculando uma soma dos números informado 
//para imprimir o resultado,um vetor de 2 posição também fazendo um outro cálculo de 
//+2 e imprimindo o resultado.

int main()
{  
    //Declaração das variáveis.
    int matriz1[2][2];
    int matriz2[2][2];
    int i,j;
    int vetor[2];
    int soma1=0;
    int soma2=0;


      //laço de repetição de matriz de [i] e [j].
      for(i=0;i<2;i++){
          cout<<"\n";
          for(j=0;j<2;j++){
              
              
          cout<<"Informa os números para matriz\n";//Entrada de dado.
          cin>>matriz1[i][j];//Saída de dado.
   
          }
      }
    
     //laço de repetição de matriz de [i] e [j].
      for(i=0;i<2;i++){
          cout<<"\n";
          for(j=0;j<2;j++){
              
           
           //Imprimir a primeira matriz de [i] e [j]. 
            cout<<" "<<matriz1[i][j];  
            
            
          }
       }
       
       
      //laço de repetição de matriz de [i] e [j].
      for(i=0;i<2;i++){
          cout<<"\n";
          for(j=0;j<2;j++){
              
              
          cout<<"Informa os números para matriz\n";//Entrada de dado.
          cin>>matriz2[i][j];//Saída de dado.
   
          }
      }
    
     //laço de repetição de matriz de [i] e [j].
      for(i=0;i<2;i++){
          cout<<"\n";
          for(j=0;j<2;j++){
              
           
           //Imprimir a segunda  matriz de [i] e [j]. 
            cout<<" "<<matriz2[i][j]; 
            //Cálcular a soma das duas matrizes.
            soma1=matriz1[i][j]+matriz2[i][j];
            //Imprimir o resultado do cálculo das duas matrizes relacionado com a soma.
            cout<<"\t"<<soma1;
          }
       }

          cout<<"\n";
          cout<<"Informa o primeiro número do vetor\n";//Entrada de dado.
          cin>>vetor[i];//Saída de dado.
    
     //Validação do vetor é maior ou menor.
     if(vetor[i]<2){
            //Imprimir caso sejá menor que o vetor o número.      
            cout<<"\nÉ menor o vetor do que o número\n";    
            }else if(vetor[i]>2){
            //Imprimir caso sejá maior que o vetor o número.    
            cout<<"\nÉ maior o vetor do que o número\n";
            
            }
            cout<<"\n\n";
            //Cálculo da soma do vetor+2;
            soma2=vetor[i]+2;
            //Imprimir o resultado da soma -2 do vetor.
             cout<<"O resultado do cálculo da soma\n"<<soma2;
             
    return 0;
}