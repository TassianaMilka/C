//Bibliotecas
#include <iostream>
#include<locale.h>
#include <cstdlib>
using namespace std;


//setlocale(LC_ALL, "portuguese");

//Criar um acesso de login de entrada de informação,depois realizar algumas perguntas e ainda
//perguntar a idade do usuário.


int main()
{ 
    //Declaração das Variáveis.
    char nome[50];
    int senha;
    int novamentesenha; 
    char informa[500];
    char palavra[50];
    char palavra1[50];
    char palavra2[50];
    char palavra3[50];
    int  idade;
    char sim[50];
    char nao[50];
    char pais[100];
    char pergunta[50];
    char bom[50];
    char regular[50]; 
    
    
    
     
     cout<<"Informe o seu primeiro nome.\n\n\n";//Entrada de dado.
     cin>>nome;                                 //Saída de dado.
     cout<<"Informe a sua senha em forma de numero no maximo 8.\n\n\n";//Entrada de dado.
     cin>>senha;                                                       //Saída de dado.
     cout<<"Informe novamente essa senha digitada anteriormente.\n\n\n";//Entrada de dado.
     cin>>novamentesenha;                                               //Saída de dado.
     
   
   //Validar o acesso descrito correto pelo usuário e perguntas com Entrada dado e Saída de dado.
   if(senha==novamentesenha){
       
       cout<<"\nOlá"<<nome;
       cout<<"\nAcesso aceito";
       cout<<"\nA seguir todos itens estarão aberto para responder.";
       cout<<"\nNo final deixar o comentário"; 
       cout<<"\nAgradeçemos pela sua confiança com nosso trabalho.";
       cout<<"\n\n";
       cout<<"\nPergunta";
       cout<<"\n\n";
       cout<<"\nQuais são os  países em seu ponto de vista  que os profissionais merecem mais reconhecimento pelo seu trabalho na área da tecnologia.\n\n\n";
       cin >> informa; 
       cout<<"\nQual a palavra que descreve o seu processo deste o estudo até profissionalmente.\n\n\n";
       cin>>palavra;
       cout<<"\nContém alguma palavra de para você mesmo de motivação.Gostaria de compartilhar Sim escreva uma palavra ou Não escreva a palavra Nada.\n\n\n";
       cin>>palavra1;
        
        cout<<"\nInforme a sua idade.\n\n\n";
        cin>>idade;
             
             
       //Validar a idade do usuário para armzenar.      
       if(idade<100){
             
             cout<<"\nA sua informação vai ser armzenada no sistema.\n\n\n";
             
           }else{
               
              cout<<"\nOcorreu um erro acessa novamete a página.\n\n\n";
              
              } 
            
            
         //Entrada de dado e Saída de dado sobre país de origem.  
         cout<<"Informe o seu país de origem.\n\n\n";
         cin>>pais;
         
        
       
       
         //Entrada de ddo e Saída de dado e validação  do usuário sobre cada pergunta.
         cout<<"\nInforme  se gostou destas perguntas Bom,Regular ou Ruim.\n\n\n";
         cin>>pergunta;
         
         if(pergunta==bom){
               cout<<"\nFicamos felizes com sua resposta.";
             
         }else if(pergunta==regular){
             
               cout<<"\nFicamos felizes com sua resposta na próxima seremos melhores ainda.";
             
         }
         else{
             
               cout<<"\nFicamos felizes com a sua resposta na próxima seremos melhores nas perguntas.";
             
             
         }
        
         //Imprimir a finalização de tudo.
         cout<<"\nTerminamos com as perguntas teremos mais semana que vem,"<<nome;
         
         
         
    
   //Validar o acesso descrito incorreto pelo usuário.
   }else{
       cout<<"Olá,"<<nome;
       cout<<"\nTenta Novamente algo de errado na senha algum número digitado não combina.";
       cout<<"\nAcessa novamente a página.";
   
   }
   
}