#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int v, v2, ans = 0;
	cin >> v >> v2;
	int m[v][v2];
	
	for(int i = 0; i < v; i++){
		for(int j = 0; j < v2; j++){
			cin >> m[i][j];
		}
	}
	
	for(int i = 0; i < v; i++){
		for(int j = 0; j < v2; j++){
			if(m[i][j] == 42 && m[i][j-1] == 7 && m[i][j+1] == 7 && m[i-1][j] == 7 && m[i-1][j-1] == 7 && m[i-1][j+1] == 7 && m[i+1][j-1] == 7 && m[i+1][j+1] == 7 && m[i+1][j] == 7){
				cout << i + 1 << " " << j + 1 << endl;
				ans ++;
			}
		}
		
	}
	if(ans == 0) cout << "0 0" << endl;
	
	
}
	
