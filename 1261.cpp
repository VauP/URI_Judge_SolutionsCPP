#include <bits/stdc++.h>
using namespace std;

 map<string, int>map,mapa;

int main()
{
	int m, n, v, s,i;
	string w;

	while(cin >> m >> n)
	{
	for(i=0;i<m;i++)
		{
			cin >> w >> v;
			mapa[w] = v;
		}

         for(i=0;i<n;i++)
		{
			s = 0;
			while(cin >> w && w.compare(".") != 0)
				s += mapa[w];

			printf("%d\n", s);
		}
	}
}
