//Bibliotecas
#include <iostream>
#include<locale.h>
using namespace std;

//setlocale(LC_ALL, "portuguese");

//Em um restaurante contém valores de prato de 10.00 até 30.00 reias + 0.5.Na estrada de 
//dado informa se solicitar 2 prato vai ser 10.00,4 prato 15.00,5 prato vai ser 20.00,
//8 prato vai ser 25.00,10 prato vai ser 30.00 utilizando vetor de posições;


int main()
{



//Declaração das variáveis.
   
   int   prato[8];
   int   i;
   float cal1[2];
   float cal2[4];
   float cal3[6];
   float cal4[8];
   float cal5[10];
   
   
    cout<<"Enter information\n";//Entrada de dado.
    cin>>prato[i];//Saída de dado.

    //Validação igual a o número inserido na entrada de dado e depois realização do cálculo.
    if(prato[i] == 1 || prato[i]==2){
        
       //Cálculo 1.
       cal1[i]=10.00+0.5;
       //Imprimir o resuldado do Cálculo 1.
       cout<<"The resultad calcule\t"<<cal1[i];
                            
    }if (prato[i] == 3 || prato[i]==4){
        
       //Cálculo 2.
       cal2[i]=15.00+0.5;
       //Imprimir o resuldado do Cálculo 2. 
       cout<<"The resultad calcule\t"<<cal2[i];  
        
    }if (prato[i] == 5 || prato[i]==6){
                           
      //Cálculo 3.
      cal3[i]=20.00+0.5;
    //Imprimir o resuldado do Cálculo 3.
      cout<<"The resultad calcule\t"<<cal3[i];
                            
    }if(prato[i] == 7|| prato[i]==8){
                            
      //Cálculo 4.
      cal4[i]=25.00+0.5; 
    //Imprimir o resuldado do Cálculo 4.
       cout<<"The resultad calcule\t"<<cal4[i];
                   
    }if(prato[i] == 9|| prato[i]==10){
        
       //Cálculo 5.
        cal5[i]=30.00+0.5;
    //Imprimir o resuldado do Cálculo 5.   
       cout<<"The resultad calcule\t"<<cal5[i];  
    }
     
    
     




    return 0;
}