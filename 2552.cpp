#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		
		int m[a][b];
		
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				cin >> m[i][j];
			}
		}
		
		for(int i = 0; i < a; i++){
			int v = 0;
			for(int j = 0; j < b; j++){
				
				v = 0;
				
				if(m[i][j] != 1 && m[i+1][j] == 1 && i != a-1) v++;
				if(m[i][j] != 1 && m[i-1][j] == 1 && i != 0) v++;
				if(m[i][j] != 1 && m[i][j+1] == 1 && j != b -1) v++;
				if(m[i][j] != 1 && m[i][j-1] == 1 && j != 0)  v++;
				if(m[i][j] != 1) cout << v;
				if(m[i][j] == 1) cout << "9";
				
			}
			
			cout << endl;
		}
	}	
}
