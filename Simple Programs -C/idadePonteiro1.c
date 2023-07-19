//Bibliotecas
#include<stdio.h>
#include<stdlib.h>

//Faça utilizando ponteiro sobre idade que multiplica 14/2 e o resultado ser usado  em uma validação de dado de 
//maior a 15 ou menor.

int main(){

//Declaração das váriaveis utilizando ponteiro.
int*idade1;//Ponteiro destinado a direcionar o resultado.
//Realizado o cálculo de divisão utilizando ponteiro. 
(*idade1)=14/2;
//Validação  de dado sobre a idade maior ou menor.
if((*idade1>15)){
//Imprimir a mensagem para classificar sobre a idade caao seja maior.
printf("A idade é maior que 15\n");
printf("=%d\n",*idade1);
printf("\n");
}if((*idade1<15)){
//Imprimir a mensagem para classificar sobre a idade caso seja menor.
printf("A idade é menor que 15\n");
printf("=%d\n",*idade1);
} 
return 0;
}


