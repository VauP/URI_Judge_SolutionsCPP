#include <iostream>
#include <iomanip>
using namespace std;
	int main() {
	 
	 int n,rpm,menor=0,c=0,c2=0;
	 cin>>n;
		 while(n--){
			 cin>>rpm;
			 
			 if(rpm>=menor){menor=rpm;c++;}
			 else if(rpm<=menor) {cout<<c+1<<endl;c2++;break;}}
			 
			 if (c2==0) cout<<"0"<<endl;
return 0;}
