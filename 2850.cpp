#include <bits/stdc++.h>
using namespace std;

int main(){
	string t;
	while(getline(cin, t)){
		if(t == "esquerda") cout << "ingles" << endl;
		else if(t == "direita") cout << "frances" << endl;
		else if(t == "nenhuma") cout << "portugues" << endl;
		else if(t == "as duas") cout << "caiu" << endl;
	}
}
