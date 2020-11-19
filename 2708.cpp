#include <iostream>

using namespace std;

int main(){

	int total = 0, variable, totalJeeps;
	string txt;
	
	while(txt != "ABEND"){
		
		cin >> txt >> variable;
		
		if (txt == "SALIDA") {
			total += variable;
			totalJeeps -= 1;
		}
		else if (txt == "VUELTA") {
			total -= variable;
			totalJeeps += 1;
		}
		
		
		
	}
	
	cout << total << endl;
	cout << totalJeeps << endl;
	


}
