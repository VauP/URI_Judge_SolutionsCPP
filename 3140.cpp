#include <bits/stdc++.h>
using namespace std;

int main(){
	string t;
	while(getline(cin, t)){

		string b = "<body>";
		if(t.find(b) != std::string::npos){
			string var;
			string f ="</body>";
			while(getline(cin, var)){
				if(var.find(f) != std::string::npos) break;
				cout << var << endl;
			}
		}
	}
}
