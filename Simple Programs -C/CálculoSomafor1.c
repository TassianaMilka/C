
//Bibliotecas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//setlocale(LC_ALL, "portuguese");


//Faça utilizando o for em que pede  n para quantos números serão exibido,depois realizar o 
//cálculo e imprimir no final quantas vezes foi pedido,o último número informado para soma
//e cálculo final dos números informado.



int main()
{ 
    
    //Declarar as variáveis.
    int i;
    int n;
    int numeroS;
    int CAL=0;
    int Multi=0;
    int numeroM;
    
    printf("Informe quantas vezes\n");//Entrada de dado.
    scanf("%d",&n);//Saída de dado.
    
    //Realizar a repetição de vezes para digitar os números.
    for(i=0;i<n;i++){
        
    
    printf("Informe o numero para soma\n");//Entrada de dado.
    scanf("%d",&numeroS);//Saída de dado.

 
 
     //Calcular a soma dos  numeros informado.
     CAL+=numeroS;

        
    }
    
    //Imprimir os resultados final.
    printf("A quantidade de vezes digitados           \n%d",n);
    printf("\n\n");
    printf("O último  número digitado foi para soma   \n%d",numeroS);
    printf("\n\n");
    printf("\nO resultado do calculo dos números inserido\n%d",CAL);
    
  

    return 0;
}
