//Biblioteca
using System;


//Realiza que o nome da classe seja n,peça que informa a quantidade de vezes para que dentro do for informa os números para Realizar fazendo um cálculo dos números informado+8/2,
//um laço de repetição de uma única vez informado um número para classificar se é igual,menor ou igual a 50 deixando mensagem em cada um para compreender,depois fora informar dois
//números para realizar uma multiplicação do que foi digitado anteriormente e finaliza com o resultado.

class n{//Nome da classe
public static void Main(){//Sem o Main deixando só a classe com seu nome não vai compilar.
     
 
    //Declaração de variável.
    int n;
    int i;
    int numero1;
    int numero2;
    int calculo1=0;
    int num1;
    int num2;
    int calculo2=0;
    
    Console.WriteLine("Informe a quantidade de vezes para serem digitado os números\n");//Entrada de dado.
    n=int.Parse(Console.ReadLine());//Saída de dado.
    //Laço de repetição que vai de i até n,ou seja o infinito,mas não acontecerá isso antes vai informa na entrada de dado
    //quantas vezes requer para informa os números.
    for(i=0;i<=n;i++){
        
        
    Console.WriteLine("Informe o número\n");//Entrada de dado.
    numero1=int.Parse(Console.ReadLine());//Saída de dado.
    
    //Realizando o cálculo de soma junto com divisão.
    calculo1=numero1+8/2;
    //Imprimir a mensagem do cálculo.
    Console.WriteLine("O resultado do cálculo\n");
    //Imprimir o resultado do cálculo.
    Console.WriteLine(calculo1);    
    }
    //Laço de repetição de i até 1.
    for(i=0;i<1;i++){
        
    Console.WriteLine("\n");
    Console.WriteLine("Informe o número\n");//Entrada de dado.
    numero2=int.Parse(Console.ReadLine());//Saída de dado.   
    
    //Validação de dado dos números que foram digitados anteriormente fora do laço de repetição igual,menor ou maior 50.
    if(numero2==50){
    //Imprimir a mensagem caso seja igual(==).    
    Console.WriteLine("O número é igual a 50\n");
        
    }if(numero2<=50){
    //Imprimir a mensagem caso seja menor igual(<=).      
    Console.WriteLine("O número é menor igual 50\n"); 
    
    }else{
    //Imprimir a mensagem caso seja maior igual(=>).      
    Console.WriteLine("O número é maior igual 50\n");    
    
    
    } 
    
    Console.WriteLine("Informe o primeiro número para realização da multiplicação\n");//Entrada de dado.    
    num1=int.Parse(Console.ReadLine());//Saída de dado.
     
     
    Console.WriteLine("Informe o segundo número para realização da multiplicação\n");//Entrada de dado.    
    num2=int.Parse(Console.ReadLine());//Saída de dado.
     
    
    //Realizar o cálculo da multiplicação.  
    calculo2=num1*num2;
     
    //Imprimir a mensagem do cálculo.
    Console.WriteLine("O resultado do cálculo da multiplicação\n");  
    //Imprimir o resultado do cálculo.
    Console.WriteLine(calculo2);
     
     
    }   

}
  
}


