#include <iostream>

using namespace std;

int main(){
	
	int cont, x;
	
	cin >> cont;
	
	while(cont--){
		
		cin >> x;
		
		if(x <= 8000) cout << "Inseto!" << endl;
		else cout << "Mais de 8000!" << endl;
	}
	
}
