#include <iostream>

using namespace std;

int main(){

	
	int contador, i;
	long long int maxI = 0, total = 0, roubados;
	
	cin >> contador;

	int jaAtacou[contador];
	int sitios[contador];
	
	for( int x = 0; x < contador; x++){
		
		cin >> sitios[x];
		total += sitios[x];
		jaAtacou[x] = 0;
		
	}
	
	
	
	i = 0;
	roubados = 0;
	while(i < contador && i >= 0){
		
		
		if(!jaAtacou[i]) maxI++;
		
		jaAtacou[i] = 1;
		
		if(sitios[i] & 1) 
			
			++roubados,  sitios[i]--, ++i;
					
		
		else {
			
				if(sitios[i]) ++roubados, sitios[i]--;
				 i--;
			
			}
			
		}
	
	cout << maxI << " " << total - roubados << endl;

}
