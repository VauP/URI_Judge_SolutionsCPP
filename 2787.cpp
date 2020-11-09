#include <iostream>
#include <string>

using namespace std;

int main() {


		int l,c;
		
		cin>>l>>c;
		
		if(c % 2 == 0 && l % 2 == 0 ) cout<<"1"<<endl;
	    if ( c % 2 == 0 && l % 2 !=0) cout<<"0"<<endl;
		if ( c % 2 != 0 && l % 2 ==0) cout<<"0"<<endl;
		if ( c % 2 != 0 && l % 2 !=0) cout<<"1"<<endl;

}
