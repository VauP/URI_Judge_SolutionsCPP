#include <bits/stdc++.h>

using namespace std;

int main(){
	int c, v;
	char txt[26];
	
	while(scanf("%s", txt) != EOF){
		cin >> c;
		while(c--){
			cin >> v;
			cout << txt[v-1];
		}
		cout << endl;
	}
}



