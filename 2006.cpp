#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int cont, variable, real;
	
	cin >> real;
	
	for (int i = 0; i < 5; i++){	
		
		cin >> variable;
		
		if(variable == real) cont ++;
		
	}
	
	cout << cont << endl;

}
