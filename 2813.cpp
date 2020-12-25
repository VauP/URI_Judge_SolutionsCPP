#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, casaSobrando = 0, trabSobrando = 0, cComprado = 0, eComprado = 0;
	cin >> n;
	string casa, emprego;
	for(int i = 0; i < n; i++){
		cin >> casa >> emprego;
		
		if (casa == "chuva" && casaSobrando == 0) {
        	cComprado++;
        	trabSobrando++;
        } else if (casa == "chuva" && casaSobrando > 0) {
        	trabSobrando++;
        	casaSobrando--;
        }
        if (emprego == "chuva" && trabSobrando == 0) {
        	eComprado++;
        	casaSobrando++;
        } else if (emprego == "chuva" && trabSobrando > 0) {
        	casaSobrando++;
        	trabSobrando--;
        }
	}


	cout << cComprado << " " << eComprado << endl;
}

