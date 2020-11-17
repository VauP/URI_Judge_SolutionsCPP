#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double M[12][12];
	double variable, finalValue, cont;
	char O;
	
	cin >> O;
	
	for(int i = 0 ; i < 12; i++){
		
		for(int j = 0; j < 12; j++){
			
			cin >> variable;
			M[i][j] = variable;
		}
	}
	
	for(int i = 1 ; i < 11; i++){
		
		int j = 11;
		int Ivariable;
		if( i < 7){
			
			if( i > 5) Ivariable = 5;
			else Ivariable = i;
			
			cont = 0;	
			 
				while(cont < Ivariable) {
					
				
				finalValue += M[i][j];
				cont++;
				j--;
			}
	}
		else {
			
			
		
		cont = 11;	
		
			while(cont > i) {
				
			
			finalValue += M[i][j];
			cont--;
			j--;
		}
	}
			
		
	
	}
	
	if(O == 'S') {
		cout << fixed << setprecision(1) << finalValue << endl;
	}
	else if(O == 'M') {
		double media = finalValue / 30; 
		cout << fixed << setprecision(1) << media << endl;
	}
	
}

