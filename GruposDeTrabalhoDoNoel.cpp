#include <bits/stdc++.h>
using namespace std;

int main(){
	int p;
	cin >> p;
	string vetStr[p];
	string funcao[p];
	int horas[p];
	for(int i = 0; i < p; i++){
		cin >> vetStr[i] >> funcao[i] >> horas[i];
	}
	
	int totalB = 0, totalA = 0, totalM = 0, totalD = 0;
	
	for(int i = 0; i < p; i++){
		if(funcao[i] == "bonecos") totalB+=horas[i];
		if(funcao[i] == "arquitetos") totalA+=horas[i];
		if(funcao[i] == "musicos") totalM+=horas[i];
		if(funcao[i] == "desenhistas") totalD+=horas[i];
	}
	int total = 0;
	
	totalB = round(totalB/8);
	totalA = round(totalA/4);
	totalM = round(totalM/6);
	totalD = round(totalD/12);
	
	total = totalB + totalA + totalM + totalD;
	
	cout << total << endl;
}
