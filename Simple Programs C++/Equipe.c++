/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
 
 //Crie um programa sobre uma empresa que deseja saber quantos pontos 1 e 2 de equipes conseguiu 
 //atingir e depois multiplicar por 2 e saber o resultado final.
int main()
{  
    //Declarações das Variáveis.
    float equipe1;
    float equipe2;
    float ponto1=0;
    float ponto2=0;
    
    cout<<"Informe os pontos da equipe 1\n";//Entrada de dado ou Leitura de entrada.
    cin >> equipe1;                         //Saída de dado ou Leitura de saída.
    
    cout<<"Informe os pontos da equipe 2\n"; //Entrada de dado ou Leitura de entrada.
    cin>>equipe2;                            //Saída de dado   ou Leitura de saída.
    
    //As contas para saber os resultados finais.
    ponto1=equipe1*2;
    
    ponto2=equipe2*2;
    
    //Imprimir os resultados finais de todos.
    cout<<"---------EQUIPE 1-----------\n";
    cout<<"O ponto da equipe1\n"<<ponto1;
    cout<<"\n\n";
    cout<<"---------EQUIPE 2------------\n";
    cout<<"O ponto da equipe2\n"<<ponto2;
    
  
    
    
    return 0;
}