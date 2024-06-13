//Bibliotecas
#include <iostream>
#include<string.h>
#include<locale.h>
using namespace std;

//setlocale(LC_ALL, "portuguese");



//Em uma loja a necessidade de uma  construção de código utilizando while sendo que necssita imprimir 
//de 1 até 14 e fora  realizar uma soma e no final com número 14 uma multiplicação para uma validação
//de dado  caso é maior igual que 1901 o valor corresponde com a tabela da loja e menor igual que 1899 
//O valor não corresponde com a tabela da loja.Para finalizar imprimir um nome de produto,a sigla do
//produto e o valor  do resultado anteriormente. 


int main ()
{

//Declaração das Variáveis.
int num=1;
string nome="Mesa";
char sigla='D';
int valor1=1902;
//Mensagem para classificar.
 cout<<"------------------------------IMPRIMIR OS NÚMEROS---------------------------------";
 cout<<"\n";
 //Loop de 1 até 14.
 while(num <=14){
   //Imprimir o resultado
    cout << num<< endl;
        //Inclementação 
        num++; 
    
}

//Realiza uma soma.

valor1=1+2+3+4+5+6+7+8+9+10+11+12+13*14;
//Imprimir a mensagem para classificar.
cout<<"O resultado  do valor.";
cout << "\n"<<valor1;
cout<<"\n";

//Validação de dado de maior e menor.
if(valor1>=1901){

//Imprimir a mesagem para classificar.
cout << "O valor corresponde com a tabela da loja.\n";

}else if(valor1<=1899){
    //Imprimir a mesagem para classificar.
    cout << "O valor não corresponde com a tabela da loja.\n";

}

cout<<"\n";

//Imprimir a mensagem final sobre os dados.
cout<<"IMPRIMIR OS DADOS(nome do produto,sigla do produto e o valor).";
cout<<"\n-------------------------------------------------------------------";

cout<<"\n "<<nome; 

cout<<"\n "<<sigla; 

cout<<"\n "<<valor1; 

cout<<"\n-------------------------------------------------------------------";





    return 0;
}