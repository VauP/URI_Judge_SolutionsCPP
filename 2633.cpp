#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont;
	while(cin >> cont){
		string name[cont];
		int    namePont[cont];
		int    finalPont[cont];
		
		for(int i = 0; i < cont; i++){
			cin >> name[i] >> namePont[i];
			finalPont[i] = namePont[i];
		}
		int n = sizeof(finalPont) / sizeof(finalPont[0]);
		sort(finalPont, finalPont + n);
		int varName;
		for(int j = 0; j < cont; j++){
			
			int var = finalPont[j];
			for(int x = 0; x < cont; x++){
				if(var == namePont[x]) varName = x;
			}
			if(j < cont - 1) cout << name[varName] << " ";
			else cout << name[varName] << endl;
		}

	}
}
