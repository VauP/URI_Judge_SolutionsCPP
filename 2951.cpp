#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, g;
	cin >> n >> g;
	
	char vetChar[n];
	int vetInt[n];
	
	for(int i = 0; i < n; i++){
		cin >> vetChar[i] >> vetInt[i];
	}
	
	int x;
	cin >> x;
	
	int total = 0;
	
	for(int i = 0; i < x; i++){
		char xChar;
		cin >> xChar;
		for(int i = 0; i < n; i++){
			if(xChar == vetChar[i]) total+= vetInt[i];
		}
	}
	
	cout << total << endl;
	
	if(total >= g) cout << "You shall pass!" << endl;
	else cout << "My precioooous" << endl;
}
