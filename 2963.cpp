#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int vet[n];
	bool ver = true;
	for(int i = 0; i < n; i++){
		cin >> vet[i];
		int maior = vet[0];
		if(vet[i] > maior && i != 0) ver = false;
	}
	if(ver == true) cout << "S" << endl;
	else cout << "N" << endl;
}
