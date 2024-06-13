 
//Bibliotecas
#include<iostream>
#include<locale.h>
using namespace std;

//setlocale(LC_ALL, "portuguese");
 

//Realizar para imprimir várias vezes a frase "Embarcação de Navio" que seja da forma de um navio,sendo assim fazendo também 
//uma matriz de 6x6 de linhas e colunas imprimindo também uma validação das toneladas  de cargas igual,maior e menor e uma 
//outra utilizando o ou(||) de forma de 1.0 até 90.0,caso seja maior todas colocar uma mensagem e Imprimir uma mensagem final.


int main()
{ 
    //Declaração das Variáveis.
    int matriz[6][6];
    int i,j;
    float num;
    float tonelada;
    
    //Imprimir a mensagem da forma de um navio. 
    cout<<"\n\n";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio\n";
    cout<<"\tEmbarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio\n";
    cout<<"\t\tEmbarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio\n";
    cout<<"\t\t\tEmbarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio\n";
    
    cout<<"\n\n";
    
    //Laço de repetição da matriz de [i] até [j].
    for(i=0;i<6;i++){ 
        for(j=0;j<6;j++){
    cout<<"Informa os dados\n";//Entrada de dado.
    cin>>matriz[i][j];//Saída de dado.
                        
                        
                        
                        
    }
}
      //Laço de repetição da matriz de [i] até [j].                  
     for(i=0;i<6;i++){ 
         cout<<"\n";
        for(j=0;j<6;j++){                    
                        
       //Imprimir a matriz de [i] e [j].
       cout<<"   "<<matriz[i][j];
                        
                        
        }
     } 
    //Imprimir a mensagem da forma de um navio. 
    cout<<"\n\n";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio\n";
    cout<<"\tEmbarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio\n";
    cout<<"\t\tEmbarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio\n";
    cout<<"\t\t\tEmbarcação de Navio";
    cout<<"Embarcação de Navio";
    cout<<"Embarcação de Navio\n";
    
    
    

    cout<<"\n\n";
    cout<<"Informe a tonelada da carga de até 12.00\n";//Entrada de dado.
    cin>>tonelada;//Saída de dado.
    
    cout<<"\n\n";
    
    //Validação do que foi digitado de igual,menor e maior.
    if(tonelada==12.00){
        //Imprimir a mensagem de igual.
      cout<<"Carga lotada\n";
        
    }if(tonelada<12.00){
        //Imprimir a mensagem de menor.
        cout<<"Está com nível ideal de carga\n";
        
    }else if (tonelada>12.00){
         //Imprimir a mensagem de maior.
        cout<<"Super lotado a carga\n";
        
    }
    
    cout<<"\n\n";
    cout<<"Informa o número de 1.0 até 90.0\n";//Entrada de dado.
    cin>>num;                             //Saída de dado.
    
    
   //Validação de número digitado igual e(||). 
   if(num==1.0 || num==2.0){
       //Imprimir a mensagem da fileira 1.
       cout<<"\nEmbarcação de Navio da fileira 1--";  
       
   }if(num==3.0 || num==4.0){
       
        //Imprimir a mensagem da fileira 2.
       cout<<"\nEmbarcação de Navio fileira 2--"; 
       
   }if(num==5.0 || num==6.0){
        //Imprimir a mensagem da fileira 3.
        cout<<"\nEmbarcação de Navio fileira 3--"; 
       
     
   }if(num==7.0 || num==8.0){
        //Imprimir a mensagem da fileira 4.
        cout<<"\nEmbarcação de Navio fileira 4--"; 
        
   }if(num==9.0 || num==10.0){
        //Imprimir a mensagem da fileira 5.
       cout<<"\nEmbarcação de Navio fileira  5--";
       
   }if(num==11.0 || num==12.0){
        //Imprimir a mensagem da fileira 6.
       cout<<"\nEmbarcação de Navio fileira 6--";
       
   }if(num==13.0 || num==14.0){ 
        //Imprimir a mensagem da fileira 7.
       cout<<"\nEmbarcação de Navio fileira 7--";
       
   }if(num==15.0 || num==16.0){ 
        //Imprimir a mensagem da fileira 8.
       cout<<"\nEmbarcação de Navio fileira 8--";
       
   }if(num==17.0 || num==18.0){
        //Imprimir a mensagem da fileira 9.
       cout<<"\nEmbarcação de Navio fileira 9--";
   
   }if(num==19.0 || num==20.0){
        //Imprimir a mensagem da fileira 10.
       cout<<"\nEmbarcação de Navio fileira 10--";
       
   }if(num==21.0 ||num==22.0){
        //Imprimir a mensagem da fileira 11.
       cout<<"\nEmbarcação de Navio fileira 11--";
       
   }if(num==23.0 || num==24.0){
        //Imprimir a mensagem da fileira 12.
       cout<<"\nEmbarcação de Navio fileira 12--";
       
   }if(num==25.0 || num==26.0){
        //Imprimir a mensagem da fileira 13.
       cout<<"\nEmbarcação de Navio fileira 13--";
       
   }if(num==27.0 || num==28.0){
        //Imprimir a mensagem da fileira 14.
       cout<<"\nEmbarcação de Navio fileira 14--";
       
   }if(num==29.0 || num==30.0){ 
        //Imprimir a mensagem da fileira 15.
       cout<<"\nEmbarcação de Navio fileira 15--";
       
   }if(num==31.0 || num==32.0){ 
        //Imprimir a mensagem da fileira 16.
       cout<<"\nEmbarcação de Navio fileira 16--";
       
   }if(num==33.0 || num==34.0){
        //Imprimir a mensagem da fileira 17.
       cout<<"\nEmbarcação de Navio fileira 17--";
       
   }if(num==35.0 || num==36.0){ 
        //Imprimir a mensagem da fileira 18.
       cout<<"\nEmbarcação de Navio fileira 18";
       
   }if(num==37.0 || num==38.0){
        //Imprimir a mensagem da fileira 19.
       cout<<"\nEmbarcação de Navio fileira 19--";
       
   }if(num==39.0 || num==40.0){ 
        //Imprimir a mensagem da fileira 20.
       cout<<"\nEmbarcação de Navio fileira 20--";
       
   }if(num==41.0 || num==42.0){
        //Imprimir a mensagem da fileira 21.
       cout<<"\nEmbarcação de Navio fileira 21--";
       
   }if(num==43.0 ||  num==44.0){ 
        //Imprimir a mensagem da fileira 22.
       cout<<"\nEmbarcação de Navio fileira 22--";
       
   }if(num==45.0 || num==46.0){ 
        //Imprimir a mensagem da fileira 23.
       cout<<"\nEmbarcação de Navio fileira 23--";
       
   }if(num==47.0 || num==48.0){ 
        //Imprimir a mensagem da fileira 24.
       cout<<"\nEmbarcação de Navio fileira 24--";
       
   }if(num==49.0 ||  num==50.0){
        //Imprimir a mensagem da fileira 25.
       cout<<"\nEmbarcação de Navio fileira 25--";
       
   }if(num==51.0 || num==52.0){ 
        //Imprimir a mensagem da fileira 26.
       cout<<"\nEmbarcação de Navio fileira 26--";
       
   }if(num==53.0 || num==54.0){ 
        //Imprimir a mensagem da fileira 27.
       cout<<"\nEmbarcação de Navio fileira 27--";
       
   }if(num==55.0 || num==56.0){ 
        //Imprimir a mensagem da fileira 28.
       cout<<"\nEmbarcação de Navio fileira 28--";
       
   }if(num==57.0 ||  num==58.0){
        //Imprimir a mensagem da fileira 29.
       cout<<"\nEmbarcação de Navio fileira 29--";
       
   }if(num==59.0 || num==60.0){
        //Imprimir a mensagem da fileira 30.
       cout<<"\nEmbarcação de Navio fileira 30--";
       
   }if(num==61.0 || num==62.0){
        //Imprimir a mensagem da fileira 31.
       cout<<"\nEmbarcação de Navio fileira 31--";
       
   }if(num==63.0 ||  num==64.0){
        //Imprimir a mensagem da fileira 32.
       cout<<"\nEmbarcação de Navio fileira 32--";
       
   }if(num==65.0 ||  num==66.0){
        //Imprimir a mensagem da fileira 33.
       cout<<"\nEmbarcação de Navio fileira 33--";
       
   }if(num==67.0 ||  num==68.0){
        //Imprimir a mensagem da fileira 34.
       cout<<"\nEmbarcação de Navio fileira 34--";
       
   }if(num==69.0 ||  num==70.0){
        //Imprimir a mensagem da fileira 35.
       cout<<"\nEmbarcação de Navio fileira 35--";
      
   }if(num==71.0 || num==72.0){
        //Imprimir a mensagem da fileira 36.
       cout<<"\nEmbarcação de Navio fileira 36--";
       
   }if(num==73.0 || num==74.0){
        //Imprimir a mensagem da fileira 37.
       cout<<"\nEmbarcação de Navio fileira 37--";
       
   }if(num==75.0 ||  num==76.0){ 
        //Imprimir a mensagem da fileira 38.
       cout<<"\nEmbarcação de Navio fileira 38--";
       
   }if(num==77.0 ||  num==78.0){ 
        //Imprimir a mensagem da fileira 39.
       cout<<"\nEmbarcação de Navio fileira 39--";
       
   }if(num==79.0 ||  num==80.0){ 
        //Imprimir a mensagem da fileira 40.
       cout<<"\nEmbarcação de Navio fileira 40--";
       
   }if(num==81.0 ||  num==82.0){ 
        //Imprimir a mensagem da fileira 41.
       cout<<"\nEmbarcação de Navio fileira 41--";
       
   }if(num==83.0 ||  num==84.0){
        //Imprimir a mensagem da fileira 42.
       cout<<"\nEmbarcação de Navio fileira 42--";
       
   }if(num==85.0 || num==86.0){ 
        //Imprimir a mensagem da fileira 43.
       cout<<"\nEmbarcação de Navio fileira 43--";
       
   }if(num==87.0 || num==88.0){ 
        //Imprimir a mensagem da fileira 44.
       cout<<"\nEmbarcação de Navio fileira 44--";
       
   }if(num==89.0 || num==90.0){ 
        //Imprimir a mensagem da fileira 45.
       cout<<"\nEmbarcação de Navio fileira 45--";
       
   }else if(num>90.0){
        //Imprimir a mensagem das últimas fileiras.
       cout<<"\nEmbarcação de Navio últimas fileiras";
   }                                 
      cout<<"\n\n";
     //Imprimir a mensagem de finalização.
     cout<<"Finalização da Execução";
    
    

    return 0;
}
