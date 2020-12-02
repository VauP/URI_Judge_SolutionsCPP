#include <bits/stdc++.h> 

using namespace std;

int main(){
	
	float cont, Ta = 0, Tb = 0, Tc = 0, varA = 0, varB = 0,
	 varC = 0; 
	cin >> cont;
	
	while(cont--){
		string txt;
		int a = 0, b = 0, c = 0;
		cin >> txt >> a >> b >> c;
		Ta += a;
		Tb += b;
		Tc += c;
		int A,B,C;
        cin>>A>>B>>C;
		varA += A;
		varB += B;
		varC += C;
	}
	
	cout << "Pontos de Saque: " << fixed << setprecision(2) << ((varA * 100) / Ta) << " %." << endl;
	cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << ((varB * 100)) / Tb << " %." << endl;
	cout << "Pontos de Ataque: " << fixed << setprecision(2) << ((varC * 100)) / Tc << " %." << endl;	


}
