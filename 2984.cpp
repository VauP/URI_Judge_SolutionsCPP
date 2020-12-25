#include <bits/stdc++.h>
using namespace std;

int main(){
	string txt;
	cin >> txt;
	
	int open = 0;
	
	for(unsigned int i = 0; i < txt.length(); i++){
		if(txt[i] == '(') open++;
		
		else if(txt[i] == ')' && open > 0) open--;
	}
	
	if(open > 0) cout << "Ainda temos " << open << " assunto(s) pendente(s)!" << endl;
	else cout << "Partiu RU!" << endl;
	
}
