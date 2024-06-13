//Biblioteca 
using System;

//Realiza  que o nome da classe seja multiplicação para informa dois números na realização de uma multiplicação,sendo
//assim monstrar o resultado e depois fazer uma lista de classificação de 1 até 5 que define com o resultado do cálculo
//para informa e imprimir no final.

class multiplicação{//Nome da classe
 public static void Main(){//Sem o Main deixando só a classe com seu nome não vai compilar.
     
     //Declaração das variáveis.
     int num1;
     int num2;
     int calculo=0;
     int informa;
    
    Console.WriteLine("Informe o primeiro número");//Entrada de dado.
    num1=int.Parse(Console.ReadLine());//Saída de dado.
  
  
    Console.WriteLine("Informe o segundo número");//Entrada de dado.
    num2=int.Parse(Console.ReadLine());//Saída de dado.
    
    //Realizar o cálculo dos números informados.
    calculo=num1*num2;
    
    //Imprimir o resultado do cálculo da multiplicação.
    Console.WriteLine("O resultado da multiplicação");
    //Imprimir o resultado do cálculo da multiplicação.
    Console.WriteLine(calculo);
    Console.WriteLine("\n\n");
    //Informa a que escala está referindo conforme cada número definido para representar.
    Console.WriteLine("1-O resultado foi acima de 9\n");
    Console.WriteLine("2-O resultado foi acima de 60\n");
    Console.WriteLine("3-O resultado foi acima de 200\n");
    Console.WriteLine("4-O resultado foi acima de 900\n");
    Console.WriteLine("5-Foi um resultado maior que todos\n");
    Console.WriteLine("Informe de [1 até 5] o que classifica o resultado da escala do seu resultado\n");//Entrada de dado.
    informa=int.Parse(Console.ReadLine());//Saída de dado.
    Console.WriteLine("\n");
    //Imprimir a mensagem sobre o resultado da escala.
    Console.WriteLine("A classificação da escala do resultado\n"); 
    //Imprimir sobre o resultado da escala.  
    Console.WriteLine(informa);
    
    
  
  
  }
}
