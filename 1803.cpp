#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string vet[4];
	stringstream ss;
	
	for(int i = 0; i < 4; i++){
		cin >> vet[i];
	}
	string a = vet[0];
	int aInt = a.length();
	int vetInt[4][aInt];
	
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < aInt; j++){
			string var = vet[i];
			char finalVar = var[j];
			
			ss << finalVar;
			ss >> vetInt[i][j];
		
		}
	}
	string f0 = vet[0];
	string f1 = vet[1];
	string f2 = vet[2];
	string f3 = vet[3];
	
	char fc[4];
	 fc[0] = f0[0];
	 fc[1] = f1[0];
	 fc[2] = f2[0];
	 fc[3] = f3[0];

	string finalF;
	
	for(int i = 0; i < 4; i++){
		finalF += fc[i];
	}
	int F = 0;
	 
	F = stoi(finalF);
	
	//----
	string l0 = vet[0];
	string l1 = vet[1];
	string l2 = vet[2];
	string l3 = vet[3];
	
	char lc[4];
	 lc[0] = l0[aInt - 1];
	 lc[1] = l1[aInt - 1];
	 lc[2] = l2[aInt - 1];
	 lc[3] = l3[aInt - 1];

	string finalL;
	
	for(int i = 0; i < 4; i++){
		finalL += lc[i];
	}
	
	int L = 0;
	L = stoi(finalL);
	

		for(int j = 1; j < aInt - 1; j++){
			string m0 = vet[0];
			string m1 = vet[1];
			string m2 = vet[2];
			string m3 = vet[3];
	
			char mc[4];
			mc[0] = m0[j];
			mc[1] = m1[j];
			mc[2] = m2[j];
			mc[3] = m3[j];

			string finalM;
	
			for(int i = 0; i < 4; i++){
				finalM += mc[i];
			}
	
			int M = 0;
			M = stoi(finalM);
			
			int CH = (F * M + L) % 257;
			printf("%c", CH);
			
		}
		cout << endl;
	
	
}
