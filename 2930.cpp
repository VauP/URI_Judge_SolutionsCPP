#include <bits/stdc++.h>
using namespace std;

int main(){
	int e, d;
	cin >> e >> d;
	
	if((d - e) >= 3) {
		cout << "Muito bem! Apresenta antes do Natal!" << endl;
	}
	else if((d - e) < 3 && e <= d) {
		cout << "Parece o trabalho do meu filho!" << endl;
		if(d + 2 > 24) cout << "Fail! Entao eh nataaaaal!" << endl;
		else cout << "TCC Apresentado!" << endl;
	}
	else {
		cout << "Eu odeio a professora!" << endl;
	}
}
