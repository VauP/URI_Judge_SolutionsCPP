#include <iostream>
#include <string>

using namespace std;

int main(){
	
		int num1 = 0, num0;
		string var = "";
		
		cin>>var;
		
		for(unsigned i = 0; i < var.length(); i++){
		
			if(var.at(i) == '1') num1++;
			else num0++;
		
		}
		if(num1 % 2 != 0) {var+= '1'; cout<<var<<endl;}
		else {var+= '0'; cout<<var<<endl;}
		

}
