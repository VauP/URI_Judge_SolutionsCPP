#include <iostream>
#include <cmath>


using namespace std;

int main(){
	
	int cont, var;
	
	cin >> cont;
	
	while(cont--)
		{
			cin >> var;
			int newVar = var - 2015;
			
			if(newVar > 0) cout << newVar + 1 << " A.C." << endl;
			else if(newVar < 0) cout << -newVar << " D.C." << endl;
			else cout << "1 A.C." << endl;
		}

	
}
