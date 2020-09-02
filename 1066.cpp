#include <iomanip>
#include <iostream>
using namespace std;

int main(){
  int p=0,im=0,po=0,ne=0,n;
  for(int i=1;i<=5;i++){
	  cin>>n;
	  
	  if(n%2==0) { p++;}
	  
	  else {im++;}
	  if(n>0) {po++;}
	  
	  else {if(n!=0) {ne++;}}
	  }
	  cout<<p<<" valor(es) par(es)"<<endl;
	  cout<<im<<" valor(es) impar(es)"<<endl;
	  cout<<po<<" valor(es) positivo(s)"<<endl;
	  cout<<ne<<" valor(es) negativo(s)"<<endl;}	
