#include <bits/stdc++.h>

using namespace std;

int main(){

	int cont;
	
	while(scanf("%d", &cont) != EOF){
		int m[cont][cont];
		int ref = cont;
		for(int i = 0; i < cont; i++){
			for(int j = 0; j < cont; j++){
				
				m[i][j] = 3;
				m[i][i] = 1;
				m[i][ref - 1] = 2;
			}
			ref--;
		}
		
		for(int i = 0; i < cont; i++){
			for(int j = 0; j < cont; j++){
				
				cout << m[i][j];
			}
			cout << endl;
		}
	}
			
	
	
}
