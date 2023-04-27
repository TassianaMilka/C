
//Bibliotecas
#include<iostream>
using namespace std;

//Fazer uma função que começa com void início não passar nada dentro parênteses dentro pedir
//para informa três números,depois realizar uma multiplicação o resultado uma validação se é 
//maior ou menor que 50,tendo o laço de repetição de i até 3 com os números informados fazendo
//outro cálculo que soma com o resultado para imprimir.Na segunda parte passar dentro do parênteses
//informar para selecionar de 1 até 8 classificando o código de cada um caso digite um que não 
//existe aparecer uma mensagem e na finalização imprimir uma mensagem fim da execução.

void inicio(){

//Declaração das Variáveis.    
int n1,n2,n3;
int calculoPrimeiro=0;
int primeiro;
int segundo;
int calculoSegundo=0;
int i;
 
cout<<"Informe o primeiro número\n";//Entrada de dado.
cin>>n1;                           //Saída de dado.

cout<<"Informe o segunda número\n";//Entrada de dado.
cin>>n2;                          //Saída de dado.


cout<<"Informe o terceiro número\n";//Entrada de dado.
cin>>n3;                           //Saída de dado.

//Realização do cálculo. 
calculoPrimeiro=n1*n2*n3;
 
    
//Imprimir o resultado do cálculo.
cout<<"-----------RESULTADO DO CÁLCULO DA MULTIPLICAÇÃO------------\n\n";
cout<<"-----------Finalização do cálculo---------------------------\n"<<calculoPrimeiro;
cout<<"\n----------------------------------------------------------\n\n";

//Validação do calculo se é maior a 50 ou menor a 50 pelo cálculo digitado.
if(calculoPrimeiro>50){
    
//Imprimir a mensagem do Maior.    
cout<<"O número é Maior\n";  
 
    
}else if (calculoPrimeiro<50){
//Imprimir a mensagem do Menor.  
  cout<<"O número é Menor\n";  
    
}
cout<<"\n\n";
//Laço de Repetição.
for(i=0;i<3;i++){ 
    
cout<<"Informe os números para matriz\n";//Entrada de dado.
cin>>primeiro;                        //Saída de dado.


//Realização de cálculo do número informado no laço de repetição. 
calculoSegundo=primeiro+calculoSegundo;
//Imprimir o cálculo da soma que foi realizada em calculoSegundo.  
cout<<"\n---------------------------RESULTADO DO CÁLCULO DA SOMA----------------\n"<<calculoSegundo;

cout<<"\n------------------------------------------------------------------------\n";

}
 

}
//Segunda parte passando pelo parênteses a declaração da variável o num.
int main(int num)
{ 
//Finaliza igual a resultado da primeira parte  utilizando o void inicio o que 
//foi realizado.
inicio(); 
cout<<"\n\n";
cout<<"De 1 até 8 para saber o código do número selecionado da compra realizada\n"; 
cout<<"\nInforme o número\n";//Entrada de dado.
cin>>num;                   //Saída de dado.
    
    
//Validação de número informado de 1 até 8 e uma mensagem caso digita outro número.
if(num==1){
        
 cout<<"EMPRESA156\n";    
        
}if(num==2){
        
  cout<<"EMPRESA119\n"; 
        
}if(num==3){
        
  cout<<"EMPRESA097\n"; 
        
}if(num==4){
        
 cout<<"EMPRESA506\n"; 
        
}if(num==5){
        
  cout<<"EMPRESA176\n"; 
        
}if(num==6){
        
  cout<<"EMPRESA180\n"; 
}if(num==7){
        
  cout<<"EMPRESA123\n"; 
        
}if(num==8){
        
  cout<<"EMPRESA105\n"; 
}if(num>8){
        
  cout<<"Não contém armazenado\n"; 
        
}    
//Imprimir mensagem final.
  cout<<"\nFim da execução";
 
    //retorno.
    return 0;
}
