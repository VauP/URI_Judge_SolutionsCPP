#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		long long conta = 0;
		for(int i = 1; i <= n; i++){
			conta = i * i + conta;
		}
		
		cout << conta << endl;
	}
}
