#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int cont;
	cin >> cont;
	
	while(cont--)
	{
		int a, b, c, t = 0;
		cin >> a >> b >> c;
		if(a >=200 && a <=300) t++;
		if(b >= 50) t++;
		if(c >= 150) t++;
		if(t == 3) cout << "Sim"<< endl;
		else cout << "Nao" << endl;
	}
}
