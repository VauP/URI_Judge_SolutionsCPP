#include <iostream>
using namespace std;

int main(){
	long long int n;
	while(cin >> n){
		
		long long int R = 1 + ((((n-1) * n)/2) + (((n) * (n - 1) * (n - 2 ) * (n - 3))/24));
		cout << R << endl;
	}
}
