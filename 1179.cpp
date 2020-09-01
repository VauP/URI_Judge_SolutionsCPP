#include <iomanip>
#include <iostream>
using namespace std;

int main(){
   int par[5];
   int impar[5];
   int n,cp=0,ci=0,c;//c=contador,contadorPar e contadorImpar
   
   for(int i=1;i<=15;i++){
	   cin>>n;
	   if(cp==5) {for(int i=0;i<5;i++){
					cp=0;
					cout<<"par["<<i<<"] = "<<par[i]<<endl;}}
					
	   if(ci==5) {for(int i=0;i<5;i++){
					ci=0;
					cout<<"impar["<<i<<"] = "<<impar[i]<<endl;}}
					
	   if(n%2==0) { par[cp]=n; cp++;}
	   else { impar[ci]=n; ci++;}
	   
	    if(i == 15){
			
                  c = 0;
                 while(c < ci){ cout<<"impar["<<c<< "] = "<<impar[c]<<endl; c++;}
                  c = 0;
                 while(c < cp){ cout<<"par["<<c<< "] = "<<par[c]<<endl; c++;}
            }}
}
