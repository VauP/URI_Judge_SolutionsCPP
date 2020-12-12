#include <bits/stdc++.h>
using namespace std;

int main(){
	char t[14];
	int n;
	cin >> n;
	while(n--){
		cin >> t;
		string a, b, c;
		a = t[2]; a+=t[3];
		b = t[5];b+=t[6]; b+=t[7];
		c = t[11]; c+=t[12];
		stringstream cA(a);
		stringstream cB(b);
		stringstream cC(c);
		int aN = 0, bN = 0, cN = 0;
		cA >> aN;
		cB >> bN;
		cC >> cN;
		
		cout << aN+bN+cN << endl;
}
}
