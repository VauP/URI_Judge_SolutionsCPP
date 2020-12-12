#include <bits/stdc++.h>
using namespace std;
int main(){
	int cont;
	cin >> cont;
	while(cont--){
		string t;
		cin >> t;
		if(t.size() > 3) cout << '3' << endl;
		else if((t[0] == 'o' && t[1] == 'n') || (t[1] == 'n' && t[2] == 'e') || (t[0] == 'o' && t[2] == 'e')) cout << '1' << endl;
		else cout << '2' << endl;
	}
}
