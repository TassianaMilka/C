//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//setlocale(LC_ALL, "portuguese");


//Realizar um controle de compra de uma loja que necessita para  informa o nome do produto e o 
//valor lembrando que pode acontecer de conter mais de um também a uma descrição dessa maneira
//da seguinte forma:Aprendemos que devemos preserva a nossa economias para itens mais importantes.
//Para isso temos melhores preços.Tendo um cálculo de total de todos preços e terminar com uma mensage:Agradecimento pela realização da compra de nosso produto.Volte Sempre!.


int main()
{ 
    
//Declaração das variáveis.
int i;
int n;
char nome_produto[180];
float calcular=0;
float valor;



printf("Informe a quantidade de vezes para descrever cada valor\n");//Entrada de dado.
scanf("%d",&n);//Saída de dado

//Laço de repetição de i até n.
for(i=0;i<n;i++){


printf("Informe o Nome do Produto\n");//Entrada de dado 
scanf("%s",&nome_produto);//Saída de dado
printf("------------------------------------------------------------------\n");
printf("Informe o Valor\n");//Entrada de dado.
scanf("%f",&valor);//Saída de dado.
printf("------------------------------------------------------------------\n");
} 
printf("\n");
//Imprimir a mensagem para classficar na sequência.
printf("Aprendemos que devemos preserva a nossa economias para itens mais importante.Para isso temos melhores preços!");
printf("\n");
//Imprimir o nome do produto que foi digitado anteriormente.
printf("O Nome do Produto=%s\n",nome_produto);
printf("\n");
//Realização do cálculo sobre cada valor descrito.
calcular=+valor;
//Imprimir a mensagem total do valor
printf("O Valor Total=R$%2.f\n",calcular);
printf("\n");
//Imprimir a mensage final.
printf("Agradecimento pela realização da compra dos nossos produtos.Volte Sempre!");

return 0;

}
