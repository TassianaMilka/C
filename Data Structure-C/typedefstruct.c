//Biblioteca
#include <stdio.h>

//Realiza um código que contém typedef struct para declarar preço,horas e dia e o nome que possa informar 
//os dados na entrada de dado e imprimir.

//int main(){

//Informar os tipos de dado
//typedef define os tipos e  a struct é denomindada para registros.
typedef struct{
//Declaração de variavéis.
int preco,horas,dia;

}infor;
//
 typedef struct{
//Declaração de variáveis 
char nome[50];
infor infor;
 }Dado;
//Informar os dados
Dado ler_dado (){
Dado c;
printf("Digite os dados do nome,preço,horas e dia");//Entrada de dado
//Um ponteiro vai apontar para outro.
scanf("%s\n%d\n%d\n%d",&c.nome,&c.infor.preco,&c.infor.horas,&c.infor.dia);//Saída de dado
//Retorno do que foi informado na entrada de dado    
return c; 
}
//Vai imprimir todos os dados informados no bloco anterior e passa pelo parêntese o return c para
//exibir.
void imprimir_dado(Dado c){
//Imprimir os dados.
printf("\nNome-%s",c.nome);
printf("%d\n ",c.infor.preco);
printf("%d\n",c.infor.horas);
printf("%d\n",c.infor.dia);
//}
 // return 0;  
}