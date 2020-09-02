#include <iomanip>
#include <iostream>
using namespace std;

int main(){
  int n,menor=1001,x;
  int vet[1000];
  cin>>n;
  
  for(int i=0;i<n;i++){
	  cin>>x;
	  vet[i]=x;
	  if(x<menor){menor=x;}
	  }
  for(int i=0;i<n;i++){
	  if(vet[i]==menor) {cout<<"Menor valor: "<<menor<<endl;
	  cout<<"Posicao: "<<i<<endl;}
	  }}	  
