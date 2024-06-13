//Biblioteca
using System;

//Em uma loja que arruma notebook obtevem a ideia de criar um sistema para que que todos quando pagam pelo trabalho responder algumas perguntas,mas antes se quizer realizar 1-sim e 2-não,se sim deve 
//informar o código da manutenção do notebook,uma validação de valor menor que 900.00 reais ou de maior,o valor gostou de quantos ficou para 1-bom,2-regular e 3-ruim também uma validação,a marca
//do notebook que são Acer,Asus,Del,Multilaser,Samsung e outras marcas de notebook deixando uma mensagem dessa forma:Agradeçemos pelas suas resposta das perguntas,caso informar no começo que não deixar 
//uma mensagem conforme dessa forma:Tudo bem agradeçemos e respeitamos por não querer responder e para finalizar deixar última mensagem para aparecer caso digite que 1-sim e 2-não como:Caso precisar de 
//alguma manutenção para funcionar melhor entre em contato.




class valor{//Nome da Classe
  public static void Main(){//Sem o Main deixando só a classe com seu nome não vai compilar.

    //Declaração das variáveis.
   
    int responder;
    int  codigo; 
    float valor;
    int valorop;
    int numero;
   
   
    Console.WriteLine("Informe se deseja responder algumas perguntas sobre nosso trabalho\n");//Entrada de dao.
    Console.WriteLine("Para Sim-1 e Não-2\n");
    responder=int.Parse(Console.ReadLine());//Saída de dado.
    Console.WriteLine("\n");   
    
    //Validação para responder algumas perguntas classificando sim-1,casp contrário responder para não-2. 
    if(responder==1){
    
    Console.WriteLine("Informe o código que contém no notebook que foi arrumado\n");//Entrada de dado.
    codigo=int.Parse(Console.ReadLine());//Saída de dado.
    Console.WriteLine("\n");   
    

    Console.WriteLine ("Informe o valor\n");//Entrada de dado.
    valor=float.Parse (Console.ReadLine ());//Saída de dado.

    //Validação de dado se o valor classifica conforme a cada um de igual e menor(=<) ou maior.
    if(valor<=899.00){

    //Imprimir a mensagem do valor baixo de 900.00 reais.
    Console.WriteLine("O valor é baixo de 900.00 reais\n");

    }else{
    //Imprimir a mensagem do valor acima  de 900.00 reais.
    Console.WriteLine("O valor é acima de 900.00 reais\n");  

    } 
    
    
    Console.WriteLine("O valor do produto é ideal\n");//Entrada de dado.
    Console.WriteLine("De [1-bom,2-regular e 3-ruim]\n");
    valorop=int.Parse(Console.ReadLine ());//Saída de dado.
    
    //Validação de dado que refere a cada valor que é igual,sendo assim o 1,2 e 3 conforme o que foi digitado.
    if(valorop==1){
        
    //Imprimir a mensagem do valor de bom.
    Console.WriteLine("O valor está bom\n");   
        
        
        
    }else if(valorop==2){
   
    //Imprimir a mensagem do valor de regular.        
    Console.WriteLine("O valor está regular\n");   
              
        
        
    }else{
     
    //Imprimir a mensagem do valor de ruim.        
    Console.WriteLine("O valor está ruim\n");   
            
        
    }
        
    Console.WriteLine("\n\n");   
            
    Console.WriteLine("1-Acer\n");
    Console.WriteLine("2-Asus\n");
    Console.WriteLine("3-Dell\n");
    Console.WriteLine("4-Multilaser\n");
    Console.WriteLine("5-Samsung\n");
    Console.WriteLine("6-Outras marcas de notebook\n");
    Console.WriteLine("\n");
    Console.WriteLine("Informe a marca do notebook de forma númerica[1 até 6]\n");//Entrada de dado.
    numero=int.Parse (Console.ReadLine ());//Saída de dado.
    
    
    Console.WriteLine("\n");   
    //Imprimir a mensagem da escolha conforme foi digitado.    
    Console.WriteLine("Agradeçemos pelas suas resposta das perguntas\n");
    
    }if(responder==2){
    //Imprimir a mensagem se caso foi digitado 2-não querem responder. 
    Console.WriteLine("Tudo bem agradeçemos e respeitamos por não querer responder\n");
      
      
    } 
    //Imprimir a mensagem final como foi digitado para 1-sim e 2-não,sendo assim a finalização da execução.
   Console.WriteLine("Caso precisar de alguma manutenção para funcionar melhor entre em contato\n");
   
     } 
 }
