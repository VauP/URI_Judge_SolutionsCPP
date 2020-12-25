#include <bits/stdc++.h>
using namespace std;

int main(){
	int h, p, f;
	while(cin >> h >> p >> f){
		if(h == 0 && p == 0 && f == 0) break;
		int m[h][p];
		for(int i = 0; i < h; i++){
			for(int j = 0; j < p; j++){
				cin >> m[i][j];
			}
		}
		int vet[f];
		
		for(int x = 0; x < f; x++){
			cin >> vet[x];
		}
		int aux = 0, j = p - 1;
		for(j = p - 1; j >= 0; j--){
			for(int i = h - 1; i >= 0; i--){
				if(m[i][j] == 0) m[i][j] = vet[aux], aux++;
				
				if(aux == f) break;
			}
			
			//if(aux == f) break;
		}
		
		for(int i = 0; i < h; i++){
			for(int j = 0; j < p; j++){
				if(j < p - 1) cout << m[i][j] << " ";
				else cout << m[i][j];
			}
			cout << endl;
		}
	}
}
				
