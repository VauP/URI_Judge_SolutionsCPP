
#include <iostream>
using namespace std;

int main(){
   
    int entrada = 0, alc = 0, gas = 0, dis = 0;

    while(entrada != 4){
        cin>>entrada;
        if(entrada == 1) alc++;
        if(entrada == 2) gas++;
        if(entrada == 3) dis++;
        
      
        
    }

    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alc<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<dis<<endl;
   
    return 0;
}