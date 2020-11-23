#include <iostream>

using namespace std;

int main(){
	
	int cont, f;
	string name;
	
	cin >> cont;
	
	while(cont --){
		
		cin >> name >> f;
		
		if(name == "Thor") cout << 'Y' << endl;
		else cout << 'N' << endl;
	}
	
	
}
