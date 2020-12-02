#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c, m;
	cin >> n >> c >> m;
	int v[c];
	int a[m];
	
	for(int i = 0; i < c; i++){
		cin >> v[i];
	}
	int cont = c;
	for(int i = 0; i < m; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < c; j++){
			if(a[i] == v[j] && v[j] >= 0) cont--, v[j] = -1;
		}
	}
	cout << cont << endl;
}
