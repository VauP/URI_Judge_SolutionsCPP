#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	int n,x,div=1,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		s=0;div=0;
		cin>>x;
		for(div=1;div<x;div++){
		if(x%div==0) s+=div;
		}
		if(s==x) cout<<x<<" eh perfeito"<<endl;
		else cout<<x<<" nao eh perfeito"<<endl;}
		
}
