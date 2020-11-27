#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int h, m, open, cont;
	
	cin >> cont;
	
	while(cont--){
		
		cin >> h >> m >> open;
		
		if(h < 10) cout << "0" << h << ":";
		else cout << h << ":";
		if(m < 10) cout << "0"<< m << " -";
		else cout << m << " -";
		
		if(open == 1) cout << " A porta abriu!" << endl;
		else cout << " A porta fechou!" << endl;
	}
	
	
}
