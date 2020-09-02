#include <iomanip>
#include <iostream>
using namespace std;

int main(){
  int n,c;
  cin>>n;
  for(c=2;c<=n;c++){
	  if(c%2==0) cout<<c<<"^2 = "<<c*c<<endl;
  }	}
