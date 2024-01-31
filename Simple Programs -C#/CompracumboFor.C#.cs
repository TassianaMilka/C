//Biblioteca
using System;

//Faça um código que relaciona três combu de lanches que são o 1-Lanche de hambuguer de frango grelhado;2 Potes pequenos de batata-frita;1 Lanche de hambuguer de misto quente; e 1 Pote de sorvete de flocos pequeno.
//O 2-Lanche de hambuguer de frango grelhado;3 Potes pequenos de batata-frita;2-Lanche de hambuguer de misto quente;e 2-pote de sorvete de nutella pequeno e o 3-(3-Lanche de hambuguer de frango grelhado;3- Potes pequenos 
//de batata-frita;2 Lanche de hambuguer de misto quente;2 Lanche de hambuguer completo;e 2 Pote de sorvete de flocos pequeno e 1 Pote de sorvete de nutella pequeno.Não se esqueça de continuar a sequência do cliente pedir mais 
//uma vez outro pedido caso não deseja mais finalizar com o seu valor de cada um e uma mensagem final que é aguarde a realização do pedido.Agradeçemos pela confiança de comprar com nós!.

class compracumbo{//Nome da classe
static void Main() {//Sem o Main deixando só a classe com seu nome não vai compilar.
  
  
  
//Declaração de variáveis;
int i;
int combu;
int informa;
int combu2;


//Laço de repetição de i até 1.
for(i=0;i<=1;i++){

Console.Write("Informe a seguir um cubom que deseja comprar\n");//Entrada de dado.
//Imprimir sobre os cubons.
Console.Write("======================Cubom-1=======================\n");
Console.Write("2-Lanche de hambuguer de frango grelhado;\n2 Potes pequenos de batata-frita;\n1-Lanche de hambuguer de misto quente;\ne 1-pote de sorvete de flocos pequeno.\n"); 
Console.Write("======================================================\n");
Console.Write("\n\n");  
Console.Write("======================Cubom-2=========================\n");
Console.Write("3-Lanche de hambuguer de frango grelhado;\n3- Potes pequenos de batata-frita;\n2-Lanche de hambuguer de misto quente;\ne 2-pote de sorvete de nutella pequeno.\n"); 
Console.Write("=======================================================\n");
Console.Write("\n\n");  
Console.Write("======================Cubom-3=========================\n");
Console.Write("3-Lanche de hambuguer de frango grelhado;\n3- Potes pequenos de batata-frita;\n2-Lanche de hambuguer de misto quente;\n2-Lanche de hambuguer completo;\ne 2-pote de sorvete de flocos pequeno e 1-pote de sorvete de nutella pequeno.\n"); 
Console.Write("=======================================================\n");
Console.Write("\n\n");  
combu=int.Parse(Console.ReadLine ());//Saída de dado.                          

//Validação de dado de igual(==)   
if(combu==1){

//Imprimir a mensagem para classificar o valor do combu-1.
Console.Write("O valor do combu-1 é de R$60,00\n");

//Declaração da variável sobre o cumbo-1 e seu preço.
int combu1preco1=60;


//Imprimir a mensagem para classificar o valor do combu-1.
Console.Write("O valor atual é de R$",combu1preco1);


}if(combu==2){
//Imprimir a mensagem para classificar o valor do combu-2.
Console.Write("O valor do combu-2 é de R$100,00\n");

//Declaração da variável  sobre o cumbo-2  e seu preço.
int combu1preco2=100;

//Imprimir a mensagem para classificar o valor do combu-2.
Console.Write("O valor atual é de R$",combu1preco2);


}else if(combu==3){ 
//Imprimir a mensagem para classificar o valor do combu-3.
Console.Write("O valor do combu-3 é de R$117,00\n");

//Declaração da variável  sobre o cumbo-3  e seu preço.
int combu1preco3=117;

//Imprimir a mensagem para classificar o valor do combu-3.
Console.Write("O valor atual é de R$",combu1preco3);

}
} 
//Laço de Repetição de i até n.
for(i=0;i<1;i++){

Console.Write("Informe se deseja comprar mais outro  cubom.Para sim-[1] e para não-[2]\n");//Entrada de dado.
informa=int.Parse (Console.ReadLine ());//Saída de dado.

//Validação de dado de diferente(negação)(!) e igual(==)
if(informa==1){

Console.Write("Informe a seguir um cubom que deseja comprar o 1,2 e 3\n");//Entrada de dado.
combu2=int.Parse (Console.ReadLine ());//Saída de dado.                          

if(combu2==1){

//Imprimir a mensagem para classificar o valor do combu-1
Console.Write("O valor do combu-1 é de R$60,00\n");


//Imprimir a mensagem para classificar.
Console.Write("Já foi realizado o seu  pedido! \n");

}if(combu2==2){
//Imprimir a mensagem para classificar o valor do combu-2
Console.Write("O valor do combu-2 é de R$100,00\n");


//Imprimir a mensagem para classificar.
Console.Write("Já foi realizado o seu  pedido! \n");

}else if(combu2==3){ 
//Imprimir a mensagem para classificar o valor do combu-3
Console.Write("O valor do combu-3 é de R$117,00\n");

//Imprimir a mensagem para classificar.
Console.Write("Já foi  realizado  o seu  pedido! \n");


 } 
}



else if(informa==2){

//Imprimir a mensagem para classificar.Caso não deseja mais compra outro cumbo.
Console.Write("Já foi realizado  o seu pedido! \n");

}
}

                                              
 Console.Write("\n\n");
//Imprimir a mensagem final para classificar.
Console.Write("\nAguarde a realização do pedido.Agradeçemos pela confiança de comprar com nós!\n");


}

}






  
  
  
