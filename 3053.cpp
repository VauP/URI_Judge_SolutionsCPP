#include <bits/stdc++.h>
using namespace std;

int main(){
	int m;
	char t;
	cin >> m >> t;
	while(m--){
		int var;
		cin >> var;
		switch(var){
			case 1: 
			if(t =='A') {t = 'B'; break;}
			if(t == 'B') {t = 'A'; break;}
			break;
			
			case 2:
			if(t == 'B') {t = 'C'; break;}
			if(t == 'C') {t = 'B'; break;}
			break;
			
			case 3: 
			if(t == 'A') {t = 'C'; break;}
			if(t == 'C') {t = 'A'; break;}
			break;
		}
	}
	cout << t << endl;
}
