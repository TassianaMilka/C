//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//setlocale(LC_ALL, "portuguese");


//Realizar um controle de compra de uma loja que necessita para  informa o nome do produto e o 
//valor lembrando que pode acontecer de conter mais de um tamb�m a uma descri��o dessa maneira
//da seguinte forma:Aprendemos que devemos preserva a nossa economias para itens mais importantes.
//Para isso temos melhores pre�os.Tendo um c�lculo de total de todos pre�os e terminar com uma mensage:Agradecimento pela realiza��o da compra de nosso produto.Volte Sempre!.


int main()
{ 
    
//Declara��o das vari�veis.
int i;
int n;
char nome_produto[180];
float calcular=0;
float valor;



printf("Informe a quantidade de vezes para descrever cada valor\n");//Entrada de dado.
scanf("%d",&n);//Sa�da de dado

//La�o de repeti��o de i at� n.
for(i=0;i<n;i++){


printf("Informe o Nome do Produto\n");//Entrada de dado 
scanf("%s",&nome_produto);//Sa�da de dado
printf("------------------------------------------------------------------\n");
printf("Informe o Valor\n");//Entrada de dado.
scanf("%f",&valor);//Sa�da de dado.
printf("------------------------------------------------------------------\n");
} 
printf("\n");
//Imprimir a mensagem para classficar na sequ�ncia.
printf("Aprendemos que devemos preserva a nossa economias para itens mais importante.Para isso temos melhores pre�os!");
printf("\n");
//Imprimir o nome do produto que foi digitado anteriormente.
printf("O Nome do Produto=%s\n",nome_produto);
printf("\n");
//Realiza��o do c�lculo sobre cada valor descrito.
calcular=+valor;
//Imprimir a mensagem total do valor
printf("O Valor Total=R$%2.f\n",calcular);
printf("\n");
//Imprimir a mensage final.
printf("Agradecimento pela realiza��o da compra dos nossos produtos.Volte Sempre!");

return 0;

}
