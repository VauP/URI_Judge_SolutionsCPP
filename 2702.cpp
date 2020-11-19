#include <iostream>

using namespace std;

int main(){

	int a, b, c, ra, rb, rc, resto = 0;
	
	cin >> a >> b >> c;
	
	cin >> ra >> rb >> rc;
	
	if (ra > a) resto += ra - a;
	if (rb > b) resto += rb - b;
	if (rc > c) resto += rc - c;
	
	cout << resto << endl;
	
}
