//Bibliotecas
#include<iostream>
using namespace std;

//setlocale(LC_ALL, "portuguese");


//Realiza utilizando função que não passa pelo parênteses dentro Informa oito números
//fazendo um cálculo da soma de todos,Imprimir uma mensagem de resultado e na segunda
//parte passar dentro dos parênteses o void com uma frase Foi realizado a soma de 8 números
//com o retorno(Calf),mas na hora de compilador não aprece a segunda parte só a primeira.


//Sem função por parênteses.
int main()
{ 
    //Declaração das variáveis.
    
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    int num8;
    int cal=0;
    int Calf;
   
    
    cout<<"Informa o primeiro número\n";//Entrada de dado.
    cin>>num1;                        //Saída de dado.
    
    cout<<"Informa o  segundo número\n";//Entrada de dado.
    cin>>num2;                       //Saída de dado.
    
    cout<<"Informa o  terceiro número\n";//Entrada de dado.
    cin>>num3;                        //Saída de dado.
     
    cout<<"Informa o  quarto número\n";//Entrada de dado.
    cin>>num4;                       //Saída de dado.
    
    cout<<"Informa o  quinto número\n";//Entrada de dado.
    cin>>num5;                      //Saída de dado.
    
    cout<<"Informa o  sexto número\n";//Entrada de dado.
    cin>>num6;                      //Saída de dado.
    
    cout<<"Informa o  sétimo número\n";//Entrada de dado.
    cin>>num7;                       //Saída de dado.
    
    cout<<"Informa o  oito número\n";//Entrada de dado.
    cin>>num8;                    //Saída de dado.
    
    //Cálculo da soma do números informados.
    cal=num1+num2+num3+num4+num5+num6+num7+num8;
    //Imprimir o resultado do cálculo da soma dos números.
    cout<<"O resultado do cálculo da soma\n"<<cal;
    //Nada entre os parênteses que faz parte da segunda parte.
    int fim();
    //Retorno.
    return 0;
}
//Segunda parte de função dentro do parênteses que passa o void.
int fim(void){
    
    //Declaração de variável.
    int Calf;
   
    //Imprimir o resultado da soma.
    cout<<"Foi realizado a soma de 8 números";
    //Segundo retorno.
    return(Calf);
}
