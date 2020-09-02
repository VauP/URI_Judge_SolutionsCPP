	#include <iostream>
	#include <iomanip>
	 using namespace std;
	int main() {
	 
	   float s=0,m=0;
	   int l,c=1,k=144;
	   char t;
	   float mat[12][12];
	   cin>>t;
	   while(k--){
		   
		   for(l=0;l<12;l++){		   
		   for(c=0;c<12;c++){	
			   cin>>mat[l][c];
		   }}}
		   switch(t){
			   case 'S': for(l=0;l<11;l++){
						  for(c=l+1;c<12;c++){	  
							s+=mat[l][c];}}
							cout<<fixed<<setprecision(1)<<s<<endl;
							break;
				case 'M': for(l=0;l<11;l++){
							
						  for(c=l+1;c<12;c++){	  
							m+=mat[l][c];}}
							cout<<fixed<<setprecision(1)<<m/66<<endl;
							break;}
	return 0;}
