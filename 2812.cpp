#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont;
	cin >> cont;
	while(cont--){
		int v, maior = -1, menor = 1001;
		cin >> v;
		int a[v];
		for(int i = 0; i < v; i++){
			cin >> a[i];
		}
		while(v>=0){
			for( int i = 0; i < v; i++){
				if(a[i] >= maior && a[i] % 2 != 0) maior = a[i];
				else if(a[i] <= menor && a[i] % 2 != 0) menor = a[i];
			}
			cout << maior << " " << menor;
			v--;
		}
	}
}
