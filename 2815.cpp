#include <bits/stdc++.h>
using namespace std;

int main(){
	string t;
	getline(cin, t);
	unsigned int size = t.length();
	for(unsigned int i = 0; i < size; i++){
		if(t[i] != ' ' && t[i+1] != ' ' && t[i+2] != ' ' && t[i+3] != ' '){
			
			if(t[i] == t[i+2] && t[i+1] == t[i+3]) {
				for(unsigned int j = i; j < size - 2; j++){
					t[j] = t[j+2];
					
				}
				size--;
				size--;
			}
		}
	}
	for(unsigned int i = 0; i < size + 2; i++){
		cout << t[i];
	}
	cout << endl;
}
