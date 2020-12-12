#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int cont;
	
	while(cin >> cont){
		int esp = cont/2+1;

		
		for(int i = 1; i <= esp; i++){
			
			for(int j = i; j <= cont/2; j++){
				cout << " ";
			}
			int p = 2 * i - 1;
			for(int s = 1; s <= p; s++){
				
				cout << "*";
			}
			
			cout << endl;
		}
		
		int c = 1;
		
		while(c <=2){
			
			for(int j = c; j <= cont/2; j++){
				cout << " ";
			}
			int p = 2 * c - 1;
			for(int s = 1; s <= p; s++){
				
				cout << "*";
				
			}
			cout << endl;
				c++;
		}
		cout << endl;

	}
}
