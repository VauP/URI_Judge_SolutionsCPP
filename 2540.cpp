#include <bits/stdc++.h>
using namespace std;

int main(){
	int j, t;
	while(cin >> j){
		 t = 0;
		for(int i = 0; i < j; i++){
			int v;
			cin >> v;
			if(v == 1) t++;
		}
		double p = (double) j*(2.0/3.0);
		if(t >= p) cout << "impeachment" << endl;
		else cout << "acusacao arquivada" << endl;
	}
}
