#include <bits/stdc++.h>
using namespace std;

int main(){
	string vet[100];
	int i = 0;
	string a, b, c;
	while(getline(cin, a)){
		if(vet[i] == "EOF") break;
	
		getline(cin, b);
	
		getline(cin, c);
		
		cout << a << b <<  c << endl;
		cout << b << c << a << endl;
		cout << c << a << b << endl;
		string a2 = a.substr(0, 10), b2= b.substr(0, 10), c2= c.substr(0, 10);
	
			
		cout << a2 << b2 << c2 << endl;
		
		i = i + 3;
	}
}
