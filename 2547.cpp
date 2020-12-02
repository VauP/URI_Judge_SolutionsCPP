#include <bits/stdc++.h>

using namespace std;

int main(){
	int cont, a, b, v;
	while(cin >> cont >> a >> b){
		int t = 0;
		while(cont--){
		cin >> v;
		if(v >= a && v <= b) t++;
		}
		cout << t << endl;
	}		
}

