#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int x, y;
		cin >> x >> y;
		long vet[3];
		vet[0] = pow((3 * x), 2) + pow(y, 2);
		vet[1] = 2 * pow(x, 2) + pow((5 * y), 2);
		vet[2] = - (100 * x) + pow(y, 3);
		long maior = -1;
		for(int i = 0; i < 3; i++)
			if(vet[i] > maior) maior = vet[i];
			
		if(maior == vet[0]) cout << "Rafael ganhou" << endl;
		else if(maior == vet[1]) cout << "Beto ganhou" << endl;
		else if(maior == vet[2]) cout << "Carlos ganhou" << endl;
	}
}
