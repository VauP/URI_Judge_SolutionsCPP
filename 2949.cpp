#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont, a = 0, e = 0, h = 0, m = 0, x = 0;
	cin >> cont;
	while(cont--){
		string t;
		char v;
		cin >> t >> v;
		switch(v){
			case 'A': a++; break;
			case 'E': e++; break;
			case 'H': h++; break;
			case 'M': m++; break;
			case 'X': x++; break;
		}
	}
		cout << x << " Hobbit(s)" << endl;
		cout << h << " Humano(s)" << endl;
		cout << e << " Elfo(s)" << endl;
		cout << a << " Anao(s)" << endl;
		cout << m << " Mago(s)" << endl;
}
