#include <bits/stdc++.h>
using namespace std;
int main(){
	
	char s[16];
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		int total = 1;
		for(unsigned int i = 0; i < strlen(s); i ++){
			if(s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'S' &&
			s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 's'){
				total = total * 2;
			}
			else {
				total = total * 3;
			}
		}
		cout << total << endl;
	}
	
	
}	
	
	
