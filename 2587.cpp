#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont;
	cin >> cont;
	while(cont--){
		string a, b, c;
		cin >> a >> b >> c;
		int p = 0, p2 = 0;
		
		for(unsigned int i = 0; i < c.length(); i++){
			
			if(c[i] == '_'){
				if(p==0) p=i;
				else p2 = i;
			}
		}
		if(a[p] == b[p2] || a[p2] == b[p]) cout << 'Y' << endl;
		else cout << 'N' << endl;
	}
}
