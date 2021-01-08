#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		long long int var;
		cin >> var;
		bool check = true;
		for(long long int i = 2; i < sqrt(var); i++){
			if(var % i == 0) {check = false; break;}
		}
		
		if(check == true) cout << "Prime" << endl;
		else cout << "Not Prime" << endl;
	}
}
