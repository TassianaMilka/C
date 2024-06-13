//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


//setlocale(LC_ALL, "portuguese");


//Realiza um código que utilizando o do while o nome,idade contendo maior e menor 
//que 20,salário e setor que possa no final imprimir todos os dados.               
 
//Declaração das váriaveis.
int informa;
char nome[180];
int idade;
float salario;
char setor[200];

int main(){
do{

printf("Informe o nome\n");//Entrada de dado.
scanf("%s",&nome);//Saída de dado.
printf("\n");

printf("Informe a idade\n ");//Entrada de dado.
scanf("%d",&idade);//Saída de dado.

//Validação de dado se a idade é maior que o número.
if(idade>20){

//Imprimir a  mensagem sobre a idade.
printf("A idade é de %d\n",idade);

//Validação de dado se a idade é menor que o número.
}else if(idade<20){

//Imprimir a  mensagem sobre a idade.
printf("A idade é de %d\n",idade);


}

printf("Informe o salário\n ");//Entrada de dado.
scanf("%f",&salario);//Saída de dado.

printf("Informe o setor em que trabalha\n");//Entrada de dado.
scanf("%s",&setor);//Saída de dado.

//Imprimir os dados do funcionário(ria) o nome,idade,salario e setor.
printf("--------------------------------------------------------------------\n");
printf("----------------DADOS  DOS FUNCIONÁRIOS(RIAS)-----------------------\n");
printf("-------------------------------------------------------------------\n");
printf("\nO nome do funcionário(ria)=%s\n",nome);
printf("\nA idade=%d\n",idade);
printf("\nO salário=%f\n ",salario);
printf("\nO setor em que trabalha=%s\n",setor); 

//Laço de repetição de informa até 1.
 
}while(informa>1);

return 0;

}



