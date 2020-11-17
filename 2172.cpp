#include <iostream>

using namespace std;

int main(){
	
	int x, xp, e;
	
	while(true){
		
			cin >> x >> xp;
			
			if( x == 0 && xp == 0) { 
				break;
									}
			else {
				e = x * xp;
				cout << e << endl;
				}
			}
}
