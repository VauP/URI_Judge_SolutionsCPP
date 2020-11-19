#include <iostream>

using namespace std;

int main(){
	
	int cont, p1, p2;
	string name, name2, variable, variable2;
	
	cin >> cont;
	
	while(cont--){
		cin >> name >> variable >> name2 >> variable2 >> p1 >> p2;
		if(variable == "PAR") {
			if((p1+p2) % 2 == 0) cout << name << endl;
			else cout << name2 << endl;
		}
		
		else {
			if((p1+p2) % 2 != 0) cout << name << endl;
			else cout << name2 << endl;
		}
	}
	
}
			
			
