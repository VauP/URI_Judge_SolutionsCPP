#include <iostream>
#include <iomanip>
using namespace std;
	int main() {
	 
	 int n,pj=0,pm=0,p=0,d=0;
	 
	 cin>>n;
	 while(n--){			 
	       for(int x=1;x<=3;x++){
			   cin>>d>>p;
				pj+=p*d;}
				
			for(int k=1;k<=3;k++){
			  cin>>p>>d;
			  pm+=p*d;}
		if(pj>=pm) {cout<<"JOAO"<<endl; pj=0;pm=0;}
		else {cout<<"MARIA"<<endl;pj=0;pm=0;}
		
		}
return 0;}
