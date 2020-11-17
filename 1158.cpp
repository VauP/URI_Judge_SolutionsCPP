#include <iostream>

using namespace std;


int main(){

	int cont, x, y;
	
	cin >> cont;
	
	while(cont--){	
		int i = 0, sum = 0;
		
		cin >> x >> y;
		
		while ( i < y ){
			
			if ( x % 2 != 0 ){ sum += x; i++; }
			
			x++;
		}
		
		cout << sum << endl;
	}
}
