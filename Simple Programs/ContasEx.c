
//Bibliotecas  

#include <stdio.h>
#include <stdlib.h>



int main()
{ 

    
     //Um programa de delta a,b,c com os numeros a seguir a=6; b=2; c=2.Depois realizar uma soma com o resultado do delta a entrada de um outro
    //numero inserido sendo assim com essa resolução fazer que possa divir com um outro número e finalizando com o total da conta novamente 
    //inserir o último para encontrar o resto final.
    
   
    //Declaração das Variáveis.
     
     int a,b,c;
     int delta;
     int numeroS;
     int soma=0;
     int numeroD;
     int Div=0;
     int numeroR;
     int resto=0;
     
     //Realização do Delta.
     printf("Informe o primeiro numero do A");
     scanf("%d",&a);
     printf("\n");
     printf("Informe o segundo numero do  B");
     scanf("%d",&b);
     printf("\n");
     printf("Informe o  Terceiro numero do C");
     scanf("%d",&c);
     printf("\n\n");


     delta=b^2-4*a*c;
     
     //Realização da soma de delta com outro número;
     
     printf("Informe o numero para realizar a soma");
     scanf("%d",&numeroS);
     printf("\n\n");
     
     soma=delta+numeroS;//Conta da soma.
     
     //Realização da divisão do resultado da soma com outro número;
     
     printf("Informe o numero para realizar a divisao com soma do resultado");//Entrada de dado ou Leitura de Saída.
     scanf("%d",&numeroD);//Saída de dado ou leitura de Saída.
     printf("\n\n");
     Div=soma/numeroD;//Conta da divisão.
     
    //Realização do resultado da divisão com outro número para encontrar o resto e finalização do programa.
    
    printf("Informe o numero para encontrar o resto");
    scanf("%d",&numeroR);
    printf("\n\n");
    
    resto=Div%numeroR;

     //Imprimir os resultados finais
 
     printf("----------------O RESULTADO DO DELTA----------------------------"); 
     printf("\n\n");
     printf("O resultado final do delta\n%d",delta);
     printf("\n\n");
     printf("----------------O RESULTADO DA SOMA----------------------------"); 
     printf("\n\n");
     printf("O resultado da soma final de delta com outro numero inserido \n%d",soma);
     printf("\n\n");
     printf("----------------O RESULTADO DA DIVISAO----------------------------");
     printf("\n\n");
     printf("O resultado da divisao com soma final \n%d",Div);
     printf("\n\n");
     printf("----------------O RESULTADO DO RESTO---------------------------");
     printf("\n\n");
     printf("O resultado do resto com a da  divisao final\n%d",resto);
     

  return 0;
 
}
    
   
