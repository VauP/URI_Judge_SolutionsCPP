#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		long long int a, b;
		cin >> a >> b;
		long long size = (trunc(log10(a)) + 1) - (trunc(log10(b)) + 1);
		stringstream ss;
		ss << a;
		string aStr;
		ss >> aStr;
		stringstream sss;
		sss << b;
		string bStr;
		sss >> bStr;
		if(size < 0) cout << "nao encaixa" << endl;
		else {
			bool check = true;
			long long i, j = 0;
			for( i = size; i < aStr.length(); i++, j++){
				char A = aStr[i];
				char B = bStr[j];
				if(A != B) {check = false; break;}
						
			}
			if(check) cout << "encaixa" << endl;
			else cout << "nao encaixa" << endl;
		}
	}
}
