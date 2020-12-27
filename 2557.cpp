#include <bits/stdc++.h>
using namespace std;

int main(){
	string t;
	while(cin >> t){
		long long int a = 0, b = 0;
		unsigned int i = 0,  posChar = 0, posEquals = 0;
		
		string aStr, bStr;
		
		if(t[0] == 'R' || t[0] == 'L' || t[0] == 'J'){
			posChar = 0;
			
			while(true) {
				for(i = 2; i < t.length(); i++){
					if(t[i] != '=' && t[i] != '+') aStr += t[i];
					else if(t[i] == '=') {posEquals = i; break;}
					else if(t[i] == '+') break;
				 }
				 for(unsigned int  j = i + 1; j < t.length(); j++){
				
					if(t[j] != '=' && t[j] != '+') bStr += t[j];
					else if(t[j] == '=') posEquals = j;
				}
				break;
			}
			
		}
		
		else {
		
			while(true) {
				for(i = 0; i < t.length(); i++){
					if(t[i] == 'R' || t[i] == 'L' || t[i] == 'J') posChar  = i;
					else if(t[i] != '=' && t[i] != '+') aStr += t[i];
					else if(t[i] == '=') posEquals = i;
					else if(t[i] == '+') break;
				 }
				 for(unsigned int j = i + 1; j < t.length(); j++){
					 if(t[j] == 'R' || t[j] == 'L' || t[j] == 'J') posChar  = j;
					else if(t[j] != '=' && t[j] != '+') bStr += t[j];
					else if(t[j] == '=') posEquals = j;
				}
				break;
			}
		}
		
		a = stoi(aStr);
		b = stoi(bStr);
		
		if(posChar < posEquals) cout << b - a << endl;
		else cout << a + b << endl;
		
	}
}

