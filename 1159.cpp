#include <iostream>
using namespace std;

int main(){
	int x=0,c=0,s=0;
	for(int i=1;i<i+2;i++){
		cin>>x;
		if(x==0){break;}
		while(c<5){
			if(x%2==0){s+=x;c++;x++;}
			else {x++;}
			}
			cout<<s<<endl;
			c=0;
			s=0;}}
