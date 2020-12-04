#include <bits/stdc++.h>
using namespace std;

int main(){
	int s = 0, v;
	for(int i = 0; i < 9; i++){
		cin >> v;
		s += v;	
	}
	if(s % 9 == 0) cout << "Rudolph" << endl;
	if(s % 9 == 1) cout << "Dasher" << endl;
	if(s % 9 == 2) cout << "Dancer" << endl;
	if(s % 9 == 3) cout << "Prancer" << endl;
	if(s % 9 == 4) cout << "Vixen" << endl;
	if(s % 9 == 5) cout << "Comet" << endl;
	if(s % 9 == 6) cout << "Cupid" << endl;
	if(s % 9 == 7) cout << "Donner" << endl;
	if(s % 9 == 8) cout << "Blitzen" << endl;
}
