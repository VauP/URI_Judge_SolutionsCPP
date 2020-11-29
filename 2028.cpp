#include <bits/stdc++.h> 

using namespace std;

int main(){

	int cont, x = 1;
	
	
	while(cin >> cont){
		int n = 1;
		string txt;
		txt += "0";
		for(int i = 0; i <= cont; i++){
			for(int k = 0; k < i; k++){
				int ref = i;
				ostringstream refStr;
				refStr << ref;
				txt += " " + refStr.str();
				n++;
			}
		}
		if(n == 1) cout << "Caso " << x << ": " << n << " numero" << endl;
		else cout << "Caso " << x << ": " << n << " numeros" << endl;
		cout << txt << endl;
		cout << endl;
		x++;
	}
}
