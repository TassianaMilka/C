//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//setlocale(LC_ALL, "portuguese");


//Em uma loja de quadros  realiza um trabalho que j� quando compra cont�m dentro 
//descrito uma frase escolhida,mas cont�m pre�os diferentes conforme a  quantidade de caracterios.H� uma 
//tabela de escala para classificar melhor os valores  a seguir est� demonstrando.
// 100-letra e 150 �  R$ 80,00;    
// 120-letra e 125 � R$  90,00;
// 150-letra e 155 � R$ 100,00.



int main()
{ 
    
//Declara��o das vari�veis.
char informe_P[100];
char informe_S[1000];
int quantidade;


printf("Informe o nome do comprador(a).\n");//Entrada de dado
//scanf("%s",&informe1);//Sa�da de dado
fgets(informe_P,100,stdin);//Sa�da de dado destinado para string que cont�m uma quantidade de caracterio.


printf("Informe a frase que o comprador(a) deseja descrever.\n");//Entrada de dado
//scanf("%s",&informe1);//Sa�da de dado
fgets(informe_S,1000,stdin);//Sa�da de dado destinado para string que cont�m uma quantidade de caracterio.


printf("Informe a quantidade de letra da frase.\n");//Entrada de dado
scanf("%d",&quantidade);//Sa�da de dado

//Valida��o de quantidade igual utilizando ou(||).
if(quantidade==100||quantidade==115){
//Imprimir a mensagem para classficar o valor.
printf("O valor do quadro � de R$80,00.\n");


}if(quantidade==120||quantidade==125){

//Imprimir a mensagem para classficar o valor.
printf("O valor do quadro � de R$90,00.\n");


}else if(quantidade==150||quantidade==155){

//Imprimir a mensagem para classficar o valor.
printf("O valor do quadro � de R$100,00.\n");

}

    return 0;
}

