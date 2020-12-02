#include <bits/stdc++.h>
using namespace std;

int main(){
	int v[40];
	int x;
	v[0] = 1, v[1] = 1;
	for(int i = 2; i < 40; i++){
		v[i] = v[i-1] + v[i-2];
	}
	cin >> x;
	for(int i=x-1; i > 0; i--){cout << v[i] << " ";}
	cout << '1' << endl;
}
		
