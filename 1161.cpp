#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int aux, aux2;
	int a, b;

	while(cin >> a >> b){
		
		  aux = 1;
		  aux2 = 1;
		  for (int i = a; i > 0; --i)
		  {
		   aux *= a;
		   a--;
		  }

		  for (int i = b; i > 0; --i)
		  {
		   aux2 *= b;
		   b--;
		  }
		  cout << aux + aux2 << endl;
		}
	}
