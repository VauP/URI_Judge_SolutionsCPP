#include <bits/stdc++.h>
using namespace std;

bool isMinusculo(char x){
	char alp[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	for(int i = 0; i < 26; i++){
			if(x == alp[i]) return false;
		}
		return true;
	}


int main(){
	int cont;
	cin >> cont;
	while(cont--){
		string t;
		vector<char> txt;
		cin >> t;
		for(unsigned int i = 0; i < t.length(); i++){
			if(isMinusculo(t[i])) txt.push_back(t[i]);
		}
		int a = txt.size();
		for(int i = a - 1 ; i >= 0; i--){
			cout << txt[i];
		}
		cout << endl;
	}
}
