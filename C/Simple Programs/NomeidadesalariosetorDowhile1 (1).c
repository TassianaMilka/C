//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


//setlocale(LC_ALL, "portuguese");


//Realiza um c�digo que utilizando o do while o nome,idade contendo maior e menor 
//que 20,sal�rio e setor que possa no final imprimir todos os dados.               
 
//Declara��o das v�riaveis.
int informa;
char nome[180];
int idade;
float salario;
char setor[200];

int main(){
do{

printf("Informe o nome\n");//Entrada de dado.
scanf("%s",&nome);//Sa�da de dado.
printf("\n");

printf("Informe a idade\n ");//Entrada de dado.
scanf("%d",&idade);//Sa�da de dado.

//Valida��o de dado se a idade � maior que o n�mero.
if(idade>20){

//Imprimir a  mensagem sobre a idade.
printf("A idade � de %d\n",idade);

//Valida��o de dado se a idade � menor que o n�mero.
}else if(idade<20){

//Imprimir a  mensagem sobre a idade.
printf("A idade � de %d\n",idade);


}

printf("Informe o sal�rio\n ");//Entrada de dado.
scanf("%f",&salario);//Sa�da de dado.

printf("Informe o setor em que trabalha\n");//Entrada de dado.
scanf("%s",&setor);//Sa�da de dado.

//Imprimir os dados do funcion�rio(ria) o nome,idade,salario e setor.
printf("--------------------------------------------------------------------\n");
printf("----------------DADOS  DOS FUNCION�RIOS(RIAS)-----------------------\n");
printf("-------------------------------------------------------------------\n");
printf("\nO nome do funcion�rio(ria)=%s\n",nome);
printf("\nA idade=%d\n",idade);
printf("\nO sal�rio=%f\n ",salario);
printf("\nO setor em que trabalha=%s\n",setor); 

//La�o de repeti��o de informa at� 1.
 
}while(informa>1);

return 0;

}



