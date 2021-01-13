#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned int n;
	cin >> n;
	for(unsigned int x = 1; x <= n; x++){
		unsigned int c;
		cin >> c;
		int vet[c];
		for(unsigned int i = 0; i  < c; i++)
			cin >> vet[i];
			
		int t = ceil(c/2);
		
		cout << "Case " << x << ": " << vet[t] << endl;
	}
}
