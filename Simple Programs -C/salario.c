
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//Fazer um programa que necessita a entrada de dado de salario, se realizou horas extras,informa a equipe que 
//trabalha,calular salário-100reais e acrescenta 0.10 porcento e no final imprimir o resultado.

int main()
{
    
    
    //Declarar as Variáveis.
    
    float salario;
    char  extras[20];
    char  trabalha[100];
    float CAL=0;
    
  
    printf("Informe o seu salario\n");//Entrada de dado.
    scanf("%f",&salario);//Saída de dado.
    printf("\n\n");
  
    printf("Informe realizou Hora extras \n");//Entrada de dado.
    scanf("%s",&extras);//Saída de dado.                    
    printf("\n\n");
     
     
    //Controle de equipe em que trabalha com entrada de dado e saída de dado. 
    printf("Informe a Equipe em que trabalha\n");
    printf("Administração-(Administração)\n");
    printf("Atendimento-(Atendimento aos Cliente)\n");
    printf("Financias-(Financias)\n");
    printf("Design-(Design)\n");
    printf("Produção-(Produção)\n");
    printf("Segurança-(Segurança Digital da Empresa)\n");
    printf("Sistemas-(Realização Projetos de Desenvolvimento de Sistemas)\n");
    printf("Escolha um desses itens acima em que você trabalaha\n");
    scanf ("%s",&trabalha);
    
    
    //Realizar uma conta 0.10;
     CAL=salario-100.00*0.10;
    
    
    //Imprimir o resultado final.
     printf("-------------------Tabela de Dado----------------------------\n");
     printf("O salario que ganha %f\n",salario);
     printf("\n\n");
     printf("Realizou horas extras\n%s",extras);
     printf("\n\n");
     printf("Equipe que trabalha \n%s",trabalha);
     printf("\n\n");
     printf("O cálculo final \n%2.f",CAL);
    
    
    

    return 0;
}