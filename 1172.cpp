#include <iostream>
using namespace std;

int main(){
int vetor[10];
for(int i=0;i<10;i++){
cin>>vetor[i];
if (vetor[i]<=0){
vetor[i]=1;}
cout<<"X["<<i<<"] = "<<vetor[i]<<endl;}
return 0;}