#include <bits/stdc++.h>
using namespace std;

int main(){
	int c, n;
	
	while(cin >> c >> n){
		string alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		string esp = "|!@#$%¨&*()_-=+<,>.;:/?~^]}[{´`";
		string a, b;
		cin.ignore(1);
		getline(cin, a);
		getline(cin, b);
		string vet[n];			
		
		for(int i = 0; i < n; i++){
			getline(cin, vet[i]);
				for(unsigned int j = 0; j < vet[i].length(); j++){
					for(unsigned int k = 0; k < b.length(); k++){
						if(vet[i][j] == b[k] && alf.find(vet[i][j] && esp.find(vet[i][j]) != std::string::npos)) vet[i][j] = tolower(a[k]);
						else if(vet[i][j] == a[k] && alf.find(vet[i][j]) != std::string::npos && esp.find(vet[i][j]) != std::string::npos) vet[i][j] = tolower(b[k]);
						else if(vet[i][j] == b[k] && alf.find(vet[i][j]) != std::string::npos) vet[i][j] = a[k];
						else if(toupper(vet[i][j]) == b[k]) vet[i][j] = tolower(a[k]);
						else if(vet[i][j] == a[k] && alf.find(vet[i][j]) != std::string::npos) vet[i][j] = b[k];
						else if(toupper(vet[i][j]) == a[k]) vet[i][j] = tolower(b[k]);
					}
			}
			cout << vet[i] << endl;
		}	
		cout << endl;
	}		
}
