#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	int n,x,d,c;
	cin>>n;
	for(int i=1;i<=n;i++){
		c=0;
		d=1;
		cin>>x;
		for(d=1;d<x;d++){
			if(x%d==0) c++;}
		if(c>=2){cout<<x<<" nao eh primo"<<endl;}
		else{cout<<x<<" eh primo"<<endl;}}		
}
