#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int cont, b, a, d, l;
	
	cin >> cont;
	
	while(cont--){
		
		cin >> b >> a >> d >> l;
		int vg = (a + d) / 2;
		if(l % 2 == 0) vg += b;
		
		cin >> a >> d >> l;
		int vg2 = (a + d) / 2;
		if(l % 2 == 0) vg2 += b;
		
		if(vg > vg2) cout << "Dabriel" << endl;
		else if( vg < vg2) cout << "Guarte" << endl;
		if(vg == vg2) cout << "Empate" << endl;
	}
}
