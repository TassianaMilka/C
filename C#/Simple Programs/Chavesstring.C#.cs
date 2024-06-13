 
//Biblioteca
using System;

                                                //Explicação 

                                        // O que é Sequência de chaves ?
//São elementos refletidos na sequência  de maneira para representar a criptografia bigverysmal(ao mesmo 
//tempo pode ser grande o número,mas também pequeno),ou seja,numeração do alfabeto utilizando só o 
//1,2 e 3 para classificar todas letras.
                                                    //Como realizar ?
//Utilizarei  para um exemplo a letra b,c,d,e(a letra principal é b);
//A letra anterior e atual é 2(por exemplo=b+c=2);
//A letra sucessor e  depois da sucessor é (por exemplo=c+e=0);
//A letra igual é(por exemplo=b+b=3);
//A letra igual  é(1/2 é(por exemplo=b+1/2=1;

                                                //Usando com a Chaves
//{B+C}+D+E=(Está sendo uma sequência composta);
//E=B{C+D}=(Está sendo uma sequência chave da metade de finalização);
//{B+E{=(Está sendo uma sequência de chave quebrada com retorno inverso);
//{B+B}}=(Está sendo uma sequência de chave igual com retorno neutro);
//{B+1/2}=(Está sendo uma sequência de chave diferente com retorno de metade simples);

                                                    //enunciado 

//Realiza um código que possa saber sobre a sequência de chaves sobre a e c utilizando string para
//que o usuário visualiza todas partes na compilação.


  public class  Chavesstring{//Nome da classe

  static void Main(){//Sem o Main deixando só a classe com seu nome não vai compilar.

      
    //Declaração das váriaveis.
    string p="{A+B]+C+D=(Está sendo uma sequência composta)";
    string s="C=a{b+cd}=";
    int bec=2;
    string t="{A+C{= ";
    int aec=0;
    string q="{A+A}}=";
    int aea=3;
    string qu="{A+1/2}";
    int aeumdois1=1; 
    string  se="{C+D}+E+F=";
    string  set="E=C{B+F}=";
    int eec=2;
    string  oi="{C+E{= ";
    int ced=0;
    string no="{C+C}}=";
    int cec=3;
    string d="{C+1/2}";
    int aeumdois2=1;
    
    
    //Imprimir todas mensagens para classificar.
      
    Console.WriteLine("Coresponde a letra a");
      
    System.Console.WriteLine( p);
    Console.WriteLine("\n");
    System.Console.WriteLine(s);
    Console.WriteLine(bec);
    Console.WriteLine("Está sendo uma sequência chave da metade de finalização\n");
    
    
    System.Console.WriteLine(t);
    Console.WriteLine("\n");
    Console.WriteLine(aec);
    Console.WriteLine("Está sendo uma sequência de chave quebrada com retorno inverso\n");


    System.Console.WriteLine(q);
    Console.WriteLine("\n");
    Console.WriteLine(aea);
    Console.WriteLine("Está sendo uma sequência de chave igual com retorno neutro\n");

    System.Console.WriteLine(qu);
    Console.WriteLine("\n");
    Console.WriteLine(aeumdois1);
    Console.WriteLine("Está sendo uma sequência de chave diferente com retorno metade simples\n");
   
    Console.WriteLine("--------------------------------------------------------------------\n"); 
    //Imprimir a mensagem 
   Console.WriteLine("Corresponde a letra c \n");

   //Imprimir todas mensagens para classificar.
    System.Console.WriteLine(se);
    Console.WriteLine("\n");
    System.Console.WriteLine(set);
    Console.WriteLine(eec);
    Console.WriteLine("Está sendo uma sequência chave da metade de finalização\n");
    
    System.Console.WriteLine(oi);
    Console.WriteLine("\n");
    Console.WriteLine(ced);
    Console.WriteLine("Está sendo uma sequência de chave quebrada com retorno inverso\n");

    System.Console.WriteLine(no);
    Console.WriteLine("\n"); 
    Console.WriteLine(cec);
    Console.WriteLine("Está sendo uma sequência de chave igual com retorno neutro\n");
    
    System.Console.WriteLine(d);
    Console.WriteLine("\n"); 
    Console.WriteLine(aeumdois2);
    Console.WriteLine("Está sendo uma sequência de chave diferente com retorno metade simples");
    
}
  
}
