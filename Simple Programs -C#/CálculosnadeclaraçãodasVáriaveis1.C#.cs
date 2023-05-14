//Biblioteca
using System;

//Realiza na propria declaração das váriaveis a uma soma de 2+1,divisão 70/2,multiplicação 90*2,subtração 3-1,cálculo do resultado da soma+ a de divisão,
//o segundo cálculo de multiplicação-subtração,para finalizar o resultado final do primeiro cálculo e o segundo cálculo e duas mensagens uma Os cálculo 
//realizados foram a Soma,Divisão,Multiplicação e Subtração.Já a segunda mensagem descrita como finalização da execução.



class Calcular{//Nome da Classe
 public static void Main(){//Sem o Main deixando só a classe com seu nome não vai compilar.
    
    //Declaração das váriaveis já realizando os cálculos do números descrito.
    int soma=2+1;
    int div=70/2;
    int vezes=90*2;
    int menos=3-1;
    int calculo1=soma+div;
    int calculo2=vezes-menos;
    int calculo_final=calculo1+calculo2;
    
    //Imprimir as mensagens e os resultados de cada cálculo.
    Console.WriteLine("\n\n");   
    Console.WriteLine("REALIZANDO OS CÁLCULOS\n");
    Console.WriteLine("Soma       \n");
    Console.WriteLine(soma);
    Console.WriteLine("Divisão    \n");
    Console.WriteLine(div);
    Console.WriteLine("Multiplicação \n");
    Console.WriteLine(vezes);
    Console.WriteLine("Subtração    \n");
    Console.WriteLine(menos);
    Console.WriteLine("Primeiro cálculo da soma com a divisão\n");
    Console.WriteLine(calculo1);
    Console.WriteLine("Segundo cálculo da multiplicação com a subtração\n");
    Console.WriteLine(calculo2);
    Console.WriteLine("Cálculo completo do primeiro com segundo uma soma\n");
    Console.WriteLine(calculo_final);
    Console.WriteLine("\n");
    //Imprimir  as duas últimas mensagens.
    Console.WriteLine("Os cálculo realizados foram a Soma,Divisão,Multiplicação e Subtração\n");
    Console.WriteLine("Finalização da execução");    
    
    
    
    
    
  }
}
