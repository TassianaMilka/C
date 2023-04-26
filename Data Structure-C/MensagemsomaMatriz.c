//Biblioteca
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//setlocale(LC_ALL, "portuguese");


//Faça uma matriz 5x5 que possa imprimir e no meio conter uma frase "frase do sentido",laço de 
//repitição que pede para informa um número que dele mesmo a soma do valor do cálculo e imprimir o resultado.


int main(){
    //Declaração das Variáveis.
    float matriz1[5][5];
    int   i,j;
    float valor;
    float cal=0;
    
    printf("Informa");//Entrada de dado.
    scanf("%f",&matriz1[i][j]);//Saída de dado.
    //Laço de repitição de i e j para realização de uma matriz 5x5.
    for(i=0;i<5;i++){
        printf("\n");
    for(j=0;j<5;j++){    
    //Imprimir a Matriz.  
    printf("%f",matriz1[i][j]);
     }
    } 
     printf("\n\n");
     //Imprimindo a frase.
     printf("A frase do sentido");
     printf("\n\n");
     //Laço de repitição de i e j para realização de uma matriz 5x5.
    for(i=0;i<5;i++){
        printf("\n");
    for(j=0;j<5;j++){    
    //Imprimir a Matriz.  
    printf("%f",matriz1[i][j]);
     }
    } 
      printf("\n\n");
     //Laço de repitição para descrever os números que seram pedido para informa.
     for(i=0;i<1;i++){
    printf("Informe o valor\n");//Entrada de dado.
    scanf("%f",&valor);//Saída de dado.
    } 
    printf("\n\n");
    printf("REALIZANDO O CÁLCULO DA SOMA DO VALOR");
    printf("\n\n");
    //Realização do cálculo da soma.
    cal=valor+valor;
    //Imprimir o resultado do cálculo.
    printf("O resultado do cálculo foi %f",cal);
    
    return 0;
}
