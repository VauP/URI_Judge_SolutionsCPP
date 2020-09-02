	#include <iostream>
	#include <iomanip>
	 using namespace std;
	int main() {
	 
	   float s=0,m=0;
	   int l,c,i,n,k=144;
	   char t;
	   float mat[12][12];
	   cin>>n;
	   cin>>t;
	   while(k--){
		   
		   for(l=0;l<12;l++){		   
		   for(c=0;c<12;c++){	
			   cin>>mat[l][c];
		   }}
		   }
		   switch(t){
			   case 'S': for(i=0;i<12;i++){
							s+=mat[n][i];}
							cout<<fixed<<setprecision(1)<<s<<endl;
							break;
				case 'M': for(i=0;i<12;i++){
							m+=mat[n][i];}
							cout<<fixed<<setprecision(1)<<m/12<<endl;
							break;
							}
			return 0;				
	}
