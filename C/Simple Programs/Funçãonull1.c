//Bibliotecas

#include<stdio.h>
#include <stdlib.h>


//setlocale(LC_ALL, "portuguese");


//Realiza utilizando função que não passa pelo parênteses,depois na segunda parte 
// return da letra descrita,mas aparecer a mensagem:Fim da execução null.

//Sem função por parênteses.
int main(){
    
    
    //Declaração das variáveis.
    char dado1,dado2;
    char letra;
   
    
    printf("Informe o primeiro dado\n");//Entrada de dado.
    scanf("%s",&dado1);                 //Saída de dado.
    printf("Informe o segundo dado\n");//Entrada de dado.
    scanf("%s",&dado2);                //Saída de dado.
    printf("\n\n");
     
      //Letra igual a fim da segunda parte e depois dentro do parênteses
      // estão o que foi Informado sobre o dado1, dado2 digitado na
      //saída de dado.
      letra=fim(dado1,dado2);
     
     //Retorno.
     return 0; 
    
}

//Segunda parte passando pelo parênteses o void.
int fim(void){
    
    //Declaração das variáveis.
    char dado1;
    char dado2;
    char letra;
    
      
     //Imprimir o resultado no final aparecer o null.
     printf("Fim da execução%s\n",letra); 
     //Retorno do que foi informado e igual na primeira parte.
     return(letra);
}
