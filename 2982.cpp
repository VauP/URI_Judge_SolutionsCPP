#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t=0;
	cin >> n;
	while(n--){
		char var;
		int val;
		cin >> var >> val;
		if(var == 'V') t += val;
		else t -= val;
	}
	if(t >= 0) cout << "A greve vai parar." << endl;
	else cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
}		
