#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int m, l;
		cin >> m >> l;
		int vetM[m][n];
		int vetL[l][n];
		
		for(int i = 0; i < m; i++){
			for(int k = 0; k < n; k++){
				cin >> vetM[i][k];
			}
		}
		
		for(int i = 0; i < l; i++){
			for(int k = 0; k < n; k++){
				cin >> vetL[i][k];
			}
		}
		
		int cM, cL, a;
		cin >> cM >> cL >> a;
		a--;cM--;cL--;
		if(vetM[cM][a] > vetL[cL][a]) cout << "Marcos" << endl;
		else if(vetM[cM][a] < vetL[cL][a]) cout << "Leonardo" << endl;
		if(vetM[cM][a] == vetL[cL][a]) cout << "Empate" << endl;
	}
}
