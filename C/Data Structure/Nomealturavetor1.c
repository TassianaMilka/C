//Bliotecas
#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

//setlocale(LC_ALL, "portuguese");

//Faça um laço de repetição para realizar uma única fez dentro necessário os 
//itens informa o nome,altura e a validação da altura 2.00 é igual ou menor
//utilizando posições de vetor.


int main()
{ 
    //Declaração das variáveis. 
    char   nome[50];
    int    i;
    float  altura[200];
    
    
    
    //Laço de repetição para realizar uma única fez os itens necessários e 
    //depois uma validação se é igual a 2.00 ou menor 2.00 da altura.
    for(i=0;i<1;i++){
        
         printf("Informe o nome\n");//Entrada de dado.
         scanf("%s",&nome[i]);     //Saída de dado.
         
         printf("Informe a sua altura\n");//Entrada de dado.
         scanf("%f",&altura[i]);         //Saída de dado.
         
         //Validação sobre altura é igual ou menor 2.00.
         if(altura[i]==2.00){
             
             //Imprimir a mensagem de igual;
              printf("A sua altura é alta de 2.00\n");
             
    
        
         }else if(altura[i]<2.00){
             //Imprimir a mensagem de menor.
             printf("A sua altura é baixa de 2.00\n");
        
        
        
    }  
        
 
    }

        
    

    return 0;
}
