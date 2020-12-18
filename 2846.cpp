#include <bits/stdc++.h>
using namespace std;

long long fibnot(long long n);

int main(){
	long long x;
	cin >> x;
	

	cout << fibnot(x) << endl;
}

long long fibnot(long long n){
	
    long long int a = 1;
    long long int b = 2;
    long long int c = 3;
    while (n > 0)
    {
        a = b;
        b = c;
        c = a + b;
        n -= (c - b - 1);
	}
    n += (c - b - 1);
    return b + n;
}
