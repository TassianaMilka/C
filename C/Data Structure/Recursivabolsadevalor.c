//Bibliotecas 
#include<stdio.h>
#include<stdlib.h>

//Um determinado analista de bolsa de valor queria saber sua quantidade  recebida em 1 hora da  
//curva sobre a  função trabalhada,mas ao mesmo tempo o x começa pelo 2 e o y pelo 3.Antes 
//necessita realizar um cálculo do número multiplicado pelo x se é igual  a primeira reta contém 24 
//e a segunda 25.Caso atingiu o ponto máximo de x automaticamente a conta  recebe R$500,00(Reais)
//ou quase R$200,00(Reais).Já no y tendo uma quantia a menos,mas o ponto máximo é igual R$300,00(Reais) 
//e o quase R$90,00(Reais).




int main(){


//Declaração das variáveis.
int numero=2;
float x=2;
float y=3;
float resultp;
float results;


//Validação  de dado.
if(numero==2){
//Realizar o cálculo.
 resultp=numero*x;
//Validação de dado. 
if(resultp==24){
//Imprimir a mensagem para classificar.
printf("Atingiu o ponto máximo x  da curva\n");
printf("--------------------------------------------------\n");
printf("Contém  R$500,00\n");
}
else{
//Imprimir a mensagem para classificar.
printf("Quase atingiu o ponto máximo x da curva\n");
printf("-------------------------------------------------------\n");
printf("Contém  R$200,00\n");
}
}

if(numero==3){
if(results==25){
//Imprimir a mensagem para classificar.
printf("Atingiu o ponto máximo y da curva\n");
printf("--------------------------------------------------\n");
printf("Contém  R$300,00\n");

}else{
//Imprimir a mensagem para classificar.
printf("Quase atingiu o ponto máximo y da curva\n");
printf("-------------------------------------------------------\n");
printf("Contém  R$90,00\n");
  
} 
}

return 0;

}