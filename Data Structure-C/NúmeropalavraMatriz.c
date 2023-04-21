//Bibliotecas
#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>


//setlocale(LC_ALL, "portuguese");

//Realizar uma matriz 2x4 deseja que informa os números,depois imprimir a tabela,um vetor
//de 5 posições que pede para informar sendo assim não imprimir os números digitados e 
//informa uma palavra que é finalização no final utilizando o char.
    
int main()
{      
    
    //Declaração das Variáveis.
    int matriz[2][4];
    int i,j;
    int vetor[5];
    char palavra[50];

    //Laço de repetição de i de linhas para matriz.
    for(i=0;i<2;i++){
        printf("\n");
    //Laço de repetição de j de colunas para matriz.
        for(j=0;j<4;j++){
         printf("Informe o número para Matriz");//Entrada de dado.
         scanf("%d",&matriz[i] [j]);//Saída de dado.
         printf("\n\n");
         }
        } 
        //Laço para imprimir os números  informados das linhas [i].
        for(i=0;i<2;i++){ 
            //Colocar o barra n(/n) para que possa exibir como uma tabela os números 
            //da linha e colunas.
            printf("\n");
        //Laço para imprimir os números  informados das colunas [j].
        for(j=0;j<4;j++){ 
            //Não realiza dessa maneira atribuição,pois acontecerá um lope infinito de zero(0).
            //i=matriz[i] [j];
           // j=matriz[i] [j];
           
        //Imprimir a matriz[i] [j](linhas e colunas).    
        printf("%d\t",matriz[i] [j]);
           }
         } 
         
         //Laço derepetição para descrever todos os números destinados ao vetor[i].
         for(i=0;i<5;i++){
             
         printf("\nInforme o número para Vetor\n");//Entrada de dado.
         scanf("%d",&vetor[i]);//Saída de dado.
         printf("\n\n"); 
         }
           printf("Informe a mensagem\n");//Entrada de dado.
           scanf("%s",palavra);//saída de dado.
           //Imprimir a palavra.
           printf("\n%s",palavra);
           
    return 0;
}
