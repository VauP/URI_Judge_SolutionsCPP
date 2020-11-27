#include <iostream>

using namespace std;

int main(){
	
	int dois = 0, tres = 0, quatro = 0, cinco = 0, cont, var;
	
	cin >> cont;
	
	while(cont--){
		
		cin >> var;
		
		if(var % 2 == 0) dois++;
		if(var % 3 == 0) tres++;
		if(var % 4 == 0) quatro++;
		if(var % 5 == 0) cinco++;
	}
		
		
	cout << dois << " Multiplo(s) de 2" << endl;
	cout << tres << " Multiplo(s) de 3" << endl;
	cout << quatro << " Multiplo(s) de 4" << endl;
	cout << cinco << " Multiplo(s) de 5" << endl;
	
}
