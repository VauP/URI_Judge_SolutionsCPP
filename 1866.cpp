#include <iostream>

using namespace std;

int main(){
	
	int cont, var;
	
	cin >> cont;
	
	while(cont--){
		
		cin >> var;
		
		if(var % 2 == 1) cout << '1' << endl;
		else cout << '0' << endl;
	}
	
}
