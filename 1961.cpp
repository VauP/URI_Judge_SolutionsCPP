#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int alt, canos, prox, anterior, perdeu = 0;
	
	cin >> alt >> canos;
	
	for(int i = 0; i < floor(canos/2); i++){
		
		cin >> anterior >> prox;
		
		if(alt < abs((prox - anterior))) perdeu ++;
		
	}
	
	if(perdeu == 0) cout << "YOU WIN" << endl;
	else cout << "GAME OVER" << endl;
	
}
