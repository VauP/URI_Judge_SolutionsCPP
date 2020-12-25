#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b;

		printf("%.f\n", (floor(log10(pow(a, b)))) + 1);
	}
}
