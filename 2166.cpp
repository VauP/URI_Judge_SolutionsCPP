#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	double x = 0;
	
	cin >> n;
	
	while(n--){
		
		x += 2;
		x = 1/x;
	}
	
	x += 1;
	
	cout << fixed << setprecision(10) << x << endl;
}
