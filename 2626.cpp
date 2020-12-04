#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string d, l, p;
	string vd = "Os atributos dos monstros vao ser inteligencia, sabedoria...";
	string vl = "Iron Maiden's gonna get you, no matter how far!";
	string vp = "Urano perdeu algo muito precioso...";
	string em = "Putz vei, o Leo ta demorando muito pra jogar...";
	while(cin >> d){
		cin >> l >> p;
		if(d==("papel") && l==("papel") && p==("tesoura")) cout << vp << endl;
		else if(d==("papel") && l==("pedra") && p==("pedra")) cout << vd << endl;
		else if(d==("papel") && l==("tesoura") && p==("papel")) cout << vl << endl;
		else if(d==("pedra") && l==("papel") && p==("pedra")) cout << vl << endl;
		else if(d==("pedra") && l==("pedra") && p==("papel")) cout << vp << endl;
		else if(d==("pedra") && l==("tesoura") && p==("tesoura")) cout << vd << endl;
		else if(d==("tesoura") && l==("papel") && p==("papel")) cout << vd << endl;
		else if(d==("tesoura") && l==("pedra") && p==("tesoura")) cout << vl << endl;
		else if(d==("tesoura") && l==("tesoura") && p==("pedra")) cout << vp << endl;
		else cout << em << endl;
	}
}
