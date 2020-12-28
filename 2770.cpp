#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a = 0, b = 0, m = 0;
	 	while(cin >> a){
		scanf("%lld%lld", &b,&m);
		for(int i = 0; i < m; i++){
			long long x, y;
			cin >> x >> y;
			if((x <= a && y <= b) || (x<= b && y <=a)) cout << "Sim" << endl;
			else cout << "Nao" << endl;
		}
		m = 0;
	}
	
	return 0;
}
