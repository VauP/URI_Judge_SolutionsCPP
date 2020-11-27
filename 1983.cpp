#include <iostream>

using namespace std;

int main(){

	int n;
	double var, RaVar, RaMaior, maior = 0;
	
	cin >> n;
	
	while(n--){
		
		cin >> RaVar >> var;
		
		if(var > maior) RaMaior = RaVar, maior = var;
	}
	
	if(maior < 8.00) cout << "Minimum note not reached" << endl;
	else cout << RaMaior << endl;

}
