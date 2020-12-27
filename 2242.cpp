#include <bits/stdc++.h>
using namespace std;

int main(){
	char t[50];
	cin >> t;
	
	int j =0, tam = 0;
	
	
	for(unsigned short i = 0; i < strlen(t); i++){
		if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u') tam++;
	}
	char vet[tam];
	char vetR[tam];
	for(unsigned short i = 0; i < strlen(t); i++){
		if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u') {vet[j] = t[i]; vetR[j] = t[i]; j++;}
	}
	
	
	reverse(vetR, vetR + tam); 
	bool check = true;
	for(int i = 0; i < tam; i++){
		if(vet[i] != vetR[i]) check = false;
	}
	if(check == true) cout << "S" << endl;
	else cout << "N" << endl;
	
}
