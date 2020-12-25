#include <bits/stdc++.h>
using namespace std;

int main(){
	string txt;
	while(cin >> txt){
		cout << txt[3] << txt[4] << "/" << txt[0] << txt[1] << "/" << txt[6] << txt[7] << endl;
		cout << txt[6] << txt[7] << "/" << txt[3] << txt[4] << "/" << txt[0] << txt[1] << endl;
		cout << txt[0] << txt[1] << "-" << txt[3] << txt[4] << "-" << txt[6] << txt[7] << endl;
	}
}
