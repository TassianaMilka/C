//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//setlocale(LC_ALL, "portuguese");


//Em uma loja de quadros  realiza um trabalho que já quando compra contém dentro 
//descrito uma frase escolhida,mas contém preços diferentes conforme a  quantidade de caracterios.Há uma 
//tabela de escala para classificar melhor os valores  a seguir está demonstrando.
// 100-letra e 150 é  R$ 80,00;    
// 120-letra e 125 é R$  90,00;
// 150-letra e 155 é R$ 100,00.



int main()
{ 
    
//Declaração das variáveis.
char informe_P[100];
char informe_S[1000];
int quantidade;


printf("Informe o nome do comprador(a).\n");//Entrada de dado
//scanf("%s",&informe1);//Saída de dado
fgets(informe_P,100,stdin);//Saída de dado destinado para string que contém uma quantidade de caracterio.


printf("Informe a frase que o comprador(a) deseja descrever.\n");//Entrada de dado
//scanf("%s",&informe1);//Saída de dado
fgets(informe_S,1000,stdin);//Saída de dado destinado para string que contém uma quantidade de caracterio.


printf("Informe a quantidade de letra da frase.\n");//Entrada de dado
scanf("%d",&quantidade);//Saída de dado

//Validação de quantidade igual utilizando ou(||).
if(quantidade==100||quantidade==115){
//Imprimir a mensagem para classficar o valor.
printf("O valor do quadro é de R$80,00.\n");


}if(quantidade==120||quantidade==125){

//Imprimir a mensagem para classficar o valor.
printf("O valor do quadro é de R$90,00.\n");


}else if(quantidade==150||quantidade==155){

//Imprimir a mensagem para classficar o valor.
printf("O valor do quadro é de R$100,00.\n");

}

    return 0;
}

