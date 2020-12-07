#include <bits/stdc++.h>
using namespace std;
int main(){
	int cont;
	cin >> cont;
	while(cont--){
		int c;
		cin >> c;
		string var[c];
		for(int i =0; i < c; i++){
			cin >> var[i];
		}
		int p;
		cin >> p;
		while(p--){
			int ref = 0;
			string txt;
			cin >> txt; 
			for(int i = 0; i < c; i++){
			if (txt.find(var[i]) != std::string::npos) {
				cout << "Abortar" << '\n';
				ref = 1;
				break;
			}
		}
			if(ref == 0)cout << "Prossiga" << endl;
		}
		cout << endl;
	}
}

			
