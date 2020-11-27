#include <bits/stdc++.h>

using namespace std;

int main()
{
	int d, a, b, maior = 0;
	cin >> d >> a >> b;
	int v = d - (a + b);
	if(a > maior) maior = a;
	if(b > maior) maior = b;
	if(v > maior) maior = v;
	cout << maior << endl;
}
