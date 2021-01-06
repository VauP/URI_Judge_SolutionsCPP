#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		int mat[a][b];
		int posX, posY, meX, meY;
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				cin >> mat[i][j];
				if(mat[i][j] == 1) meX = i, meY = j;
				else if(mat[i][j] == 2) posX = i, posY = j;
			}
		}
		int ans = abs(posX - meX) + abs(posY - meY);
		cout << ans << endl;
	}
}
			
			
