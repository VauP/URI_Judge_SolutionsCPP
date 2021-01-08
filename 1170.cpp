#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		float var;
		cin >> var;
		int cont = 0;
		while(var > 1.00){
			var = var/2;
			cont++;
		}
		cout << cont << " dias" << endl;
	}
}
