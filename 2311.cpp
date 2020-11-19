#include <iostream>
#include <iomanip>

using namespace std;

int main(){


	int cont;
	string txt;
	
	cin >> cont;
	
	while(cont--){
		double total = 0, dif, note,  maior = -1, menor = 11;
		cin >> txt >> dif;	
		
		
		for ( int i = 0; i < 7; i++){
			
			cin >> note;
			total += note;
			
			if(note < menor) menor = note;
			if( note > maior) maior = note;
		}
		
		total -= maior + menor;
		double finalTotal = total * dif;
		
		cout << txt << " " << fixed << setprecision(2) << finalTotal << endl;
	}		
		


}
