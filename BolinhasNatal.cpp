#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	
	cin >> a >> b;
	
	int t;
	if(b % 2 != 0) t= round(b/2);
	else t = b/2;
	if(t - a <= 0) cout << "Amelia tem todas bolinhas!" << endl;
	else cout << "Faltam " << t - a << " bolinha(s)" << endl;
}
