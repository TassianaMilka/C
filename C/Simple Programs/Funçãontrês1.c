
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>

//Realiza utilizando função que não passa pelo parênteses dentro informa três números fazendo 
//uma multiplicação entre os números,depois na segunda parte passa dentro do parênteses as 
//variáveis para imprimir os números digitados,o resultado da conta e o retorno do resultado.



//Sem função por parênteses.
int main(){

//Declaração das variáveis.

int n1;
int n2;
int n3; 
int finaliza;
int cal=0;


printf("Informe o primeiro número\n");//Entrada de dado.
scanf("%d",&n1);                     //Saída de dado.

printf("Informe o segunda número\n");//Entrada de dado.
scanf("%d",&n2);                    //Saída de dado.


printf("Informe o terceiro número\n");//Entrada de dado.
scanf("%d",&n3);                     //Saída de dado.

//Realização do cálculo. 
cal=n1*n2*n3;

//Finaliza igual a resultado da segunda parte e depois dentro do parênteses
// estão o que foi informado sobre o a1, a2,a3,cal digitado na
//saída de dado.
finaliza=resultado(n1,n2,n3,cal);
//Retorno.
return 0;

}

//Segunda parte passando pelo parênteses as declarações de variáveis o a1,a2,a3 e cal.
int resultado(int n1,int n2, int n3,int cal){

//Declaração de Variável.
int resultado;

//Imprimir o resultado dos números que foram informados.
printf("O primeiro número digitado\n%d\n",n1); 

printf("O segundo número digitado\n%d\n",n2); 

printf("O terceiro número digitado\n%d\n",n3);

//Imprimir o resultado do cálculo.
printf("-----------RESULTADO DO CÁLCULO------------\n\n");
printf("-----------Finalização do cálculo-------\n%d\n",cal);
printf("---------------------------------------------------\n\n");
//Retorno.
return resultado; 

} 



