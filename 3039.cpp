#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont, car = 0, b = 0;
	string n;
	char c;
	
	cin >> cont;
	while(cont--){
		cin >> n >> c;
		if(c == 'F') b++;
		else car++;
	}
	cout << car << " carrinhos" << endl;
	cout << b << " bonecas" << endl;
}
