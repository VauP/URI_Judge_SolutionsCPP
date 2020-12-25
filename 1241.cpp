#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont;
	while(cin >> cont){
		while(cont--){
			string txt, finalTxt;
			
			cin >> txt >> finalTxt;
			
			if(finalTxt.length() > txt.length()) cout << "nao encaixa" << endl;
			else {
				int tam = finalTxt.length() - 1;
				int tamPrimary = txt.length() - tam - 1;
				bool ver = true;
				for(unsigned int i = tamPrimary, j = 0; i < txt.length(); i++){
					
					if(txt[i] != finalTxt[j]) ver = false;
					j++;
				}
				if(ver == true) cout << "encaixa" << endl;
				else cout << "nao encaixa" << endl;
			}
		}
	}
}
