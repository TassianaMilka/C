// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// setlocale(LC_ALL, "portuguese");

// Faz um código que possa realizar uma soma se deseja uma subtração 1-Soma e 2-Subtração
// caso informa outro número descrever  uma mensagem dessa maneira:Esse número não é
// aceito no sistema utilizando o while,mas quando compilar não demonstrar na sequência
// também conter caso deseja fazer uma multiplicação do resultado da soma e subtração ou
// se não aparecer a mensagem:Não deseja.Tudo bem está finalizado a execução!.Se digitar conter
// a mesma que antes que não cotem o número.

// Declaração das váriaveis.
int informaNumero;
int numeroSub1;
int numeroSub2;
int numero;
int Mensagemoculta;
int n;
int i;
int sub;
int numeroSoma1;
int numeroSoma2;
int soma = 0;
int informaM;
int numeroM;
int calcular;

int main()
{

	printf("Informe se deseja realizar a subtração para 1 e para 2 a Soma dos números\n"); // Entrada de dado.
	scanf("%d", &informaNumero);															// Saída de dado.

	// Validação de dado caso é digitado que deseja realizar uma subtração.
	if (informaNumero == 1)
	{

		printf("Informe o número  para subtração\n"); // Entrada de dado.
		scanf("%d", &numeroSub1);					  // Saída de dado.

		printf("Informe o segundo número para subtração\n"); // Entrada de dado.
		scanf("%d", &numeroSub2);							 // Saída de dado.
		// Cálculo da subtração.
		sub = numeroSub1 - numeroSub2;

		// Imprimir o resultado da subtração.
		printf("O resultado da subtração==%d", sub);
	}
	else if (informaNumero == 2)
	{

		printf("Informe o primeiro número para soma\n"); // Entrada de dado.
		scanf("%d", &numeroSoma1);						 // Saída de dado.

		printf("Informe o segundo número para soma\n"); // Entrada de dado.
		scanf("%d", &numeroSoma2);						// Saída de dado.

		// Cálculo da soma.
		soma = numeroSoma1 + numeroSoma2;

		// Imprimir o resultado da soma.
		printf("O resultado da soma==%d", soma);
	}
	else
	{
		// Loop dessa forma é destina para não demonstrar a mensagem caso foi digitado anteriormente.
		while (Mensagemoculta >= 1)
		{

			// Imprimir a mensagem caso é digitado número que não corresponde.
			printf("Esse número não é aceito no sistema\n");
		}
	}

	printf("\nInforma se deseja realizar uma multiplicação dos resultados da soma e subtração\n"); // Entrada de dado.
	scanf("%d", &informaM);																		   // Saída de dado.

	// Validação de dado caso é digitado que deseja realizar uma multiplicação.
	if (informaM == 1)
	{

		// Cálcular a multiplicação.
		calcular = sub * soma;

		// Imprimir o resultado da multiplicação.
		printf("O resultado final foi==%d", calcular);
		// Imprimir a última mensagem caso é digitado essa etapa.
		printf("\nFinalização da operação!\n");
	}
	else if (informaM == 2)
	{

		// Imprimir a mensagem caso é digitado  que não deseja realizar o cálculo.
		printf("Não deseja.Tudo bem está finalizado a execução!\n");
	}
	else
	{
		// Loop dessa forma é destina para não demonstrar a mensagem caso foi digitado anteriormente.
		while (Mensagemoculta >= 1)
		{

			// Imprimir a mensagem caso é digitado número que não corresponde.
			printf("Esse número não é aceito no sistema\n");
		}
	}

	return 0;
}
