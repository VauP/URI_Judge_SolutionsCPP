#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		//if(a == 0 && b == 0) cout << "00:00" << endl;
		int hora = ceil(a * 0.033333);
		int min  = ceil(b * 0.16666);
		
		if(hora < 10 && min < 10) cout << "0" << hora << ":" << "0" << min << endl;
		else if(hora < 10 && min >= 10) cout << "0" << hora << ":" << min << endl;
		else if(hora >= 10 && min < 10) cout << hora << ":" << "0" << min << endl;
		else if(hora >= 10 && min >=10) cout << hora << ":" << min << endl;
		
	}
}
