#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int p, j1, j2, r, a;
	bool j1Win;
	
	cin >> p >> j1 >> j2 >> r >> a;
	
	if(p == 1) {
		
		if((j1 + j2) % 2 == 0) j1Win = true;
		else j1Win = false;
		
		if(r == 0 && a == 0){
			if(j1Win == true) cout << "Jogador 1 ganha!" << endl;
			else cout << "Jogador 2 ganha!" << endl;
		}
		else {
			if(r == 1 && a == 0) cout << "Jogador 1 ganha!" << endl;
			else if(r == 1 && a == 1) cout << "Jogador 2 ganha!" << endl;
			else if(r == 0 && a == 1) cout << "Jogador 1 ganha!" << endl;
		}
	}
	
	else {
		
		if((j1 + j2) % 2 == 0) j1Win = false;
		else j1Win = true;
		
		if(r == 0 && a == 0){
			if(j1Win == true) cout << "Jogador 1 ganha!" << endl;
			else cout << "Jogador 2 ganha!" << endl;
		}
		else {
			if(r == 1 && a == 0) cout << "Jogador 1 ganha!" << endl;
			else if(r == 1 && a == 1) cout << "Jogador 2 ganha!" << endl;
			else if(r == 0 && a == 1) cout << "Jogador 1 ganha!" << endl;
		}
	}
}
