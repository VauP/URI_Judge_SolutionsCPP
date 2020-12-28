#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int a, b;
	cin >> a >> b;
	double t = a * b;
	double dez 	  	 = ceil(((t) * 10) / 100);
	double vinte 	 = ceil(((t) * 20) / 100);
	double trinta 	 = ceil(((t) * 30) / 100);
	double quarenta  = ceil(((t) * 40) / 100);
	double cinquenta = ceil(((t) * 50) / 100);
	double sessenta  = ceil(((t) * 60) / 100); 
	double setenta   = ceil(((t) * 70) / 100);
	double oitenta   = ceil(((t) * 80) / 100);
	double noventa   = ceil(((t) * 90) / 100);

	cout << (long long) dez << " " << (long long) vinte << " " << (long long) trinta << " " << (long long) quarenta << " " << (long long) cinquenta << " " << (long long) sessenta << " " << (long long) setenta  << " " << (long long) oitenta  << " " << (long long) noventa << endl;
}
