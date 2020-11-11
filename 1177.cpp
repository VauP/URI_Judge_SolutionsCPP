#include <iostream>
 
using namespace std;
 
int main() {	
	
     int vet[1000];
     int contador, t;
     
     cin>>t;
     contador = 0;
     
     for(int i = 0; i<1000;i++){
		 
		 vet[i] = contador;
		 cout<<"N["<<i<<"] = "<<vet[i]<<endl;
		 
		 contador++;
		 if(contador == t) contador = 0;
	 }
}
       
  

