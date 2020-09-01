#include <iomanip>
#include <iostream>
using namespace std;

int main(){
   double n,d=0;
   double vet[100];
   cin>>n;
   d=2*n;
   for(int i=0;i<100;i++){
	   d=d/2;
	   vet[i]=d;
	   cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<vet[i]<<endl;}
}
