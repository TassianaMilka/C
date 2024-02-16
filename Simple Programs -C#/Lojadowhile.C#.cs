//Biblioteca
using System;
//Faça um código utilizando a string para imprimir algumas letras e declarar dois números para imprimir e
//realizar uma array com o 12,58,70 para ser definido como o menos utilizados.Já os números declarados realizar
//uma soma e depois o resultado multiplicar pelo 50.Assim fazer uma validação de maior que R$1,000,00 o cliente
//pode retirar das 9:00 até 14:00 pode retirar da loja na Terça-feira,Quarta-feira e menor das 16:00 até 20:00 
//pode retirar da loja na Quinta-feira,sexta-feira.No final conter um do while do número com maus destaque.


class dowhile{//Nome da classe
public static void Main(string[] args){//Sem o Main deixando só a classe com seu nome não vai compilar


//Declaração das variáveis 
string letras="a j  r z";
int soma;
int numerop=3;
int numeros=5;
int[] array = new int[5];
int total;
int n=100;
            
//Imprimir todas letras
Console.WriteLine("A letra selecionadas");
Console.WriteLine(letras);
            
//Imprimir os números 
Console.WriteLine("O número da primeira linha");
Console.WriteLine(numerop);

Console.WriteLine("O número da secunda linha");
Console.WriteLine(numeros);     
//Array         
array[0]=12;
array[1]=58;
array[2]=70;
//Imprimir os números da array
Console.WriteLine("Imprimir o menos utilizado");
Console.WriteLine(array[0]);
Console.WriteLine(array[1]);
Console.WriteLine(array[2]);

         
    
//Realizar os cálculos
soma=numerop+ numeros;
total=soma*50;

//Imprimir o resultado total
Console.WriteLine("Imprimir o total");
Console.WriteLine(total);
                     
            
//Validação de dado
if(total>=1000){
//Imprimir a mensagem para classificar conforme foi descrito anteriormente
Console.WriteLine("9:00 até 14:00 pode retirar da loja na Terça-feira,Quarta-feira\n");

}else if(total<=1000){
//Imprimir a mensagem para classificar conforme foi descrito anteriormente
Console.WriteLine("16:00 até 20:00 pode retirar da loja na Quinta-feira,sexta-feira\n");
   }
   
//Laço de repetição
do{
//Imprimir o número de mais destaque     
Console.WriteLine("O número de mais destaque");
Console.Write(n);
             
                         
}while(n<1);      


               
            }
    } 
