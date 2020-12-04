#include <bits/stdc++.h> 
using namespace std;

int main(){
	unsigned long long r, n;
	unsigned i;

	while (cin >> n)
	{
		if (n == 1)
			printf("0\n");
		else
			for (i = 0; i < n; i++)
			{
				r = (unsigned long long)pow(2, i);
				if (r == n)
				{
					printf("%u\n", i);
					break;
				}
			}
	}
}
