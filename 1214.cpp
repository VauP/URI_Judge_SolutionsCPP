#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int var;
		cin >> var;
		int vet[var];
		float media = 0;
		for(int i = 0; i < var; i++){
			cin >> vet[i];
			media += vet[i];
		}
		media = (float) media / var;
		float cont = 0;
		for(int i = 0; i < var; i++){
			if(vet[i] > media) cont++;
		}
		
		double p =  (cont/var) * 100;
		
		printf("%.3f", p);
		cout << "%" << endl;
	}
	
}
