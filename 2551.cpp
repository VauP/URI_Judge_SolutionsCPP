#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont;
	while(cin >> cont){
		double maior = -1, refI = 0;
		for(int i = 1; i <= cont; i++){
			double a, b;
			cin >> a >> b;
			if((b / a) > maior) {
				maior = b/a; refI = i;
				cout << refI << endl;}
		}
		
	}
}
