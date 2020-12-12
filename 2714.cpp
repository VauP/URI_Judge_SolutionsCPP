#include <bits/stdc++.h>
using namespace std; 
int main(){
	int n;
	cin >> n;
	while(n--){
		string txt; bool ref = true;
		cin >> txt;
		if(txt[0] != 'R' && txt[1] != 'A') ref = false;
		else if(txt.size() < 20 || txt.size() > 20) ref = false;
		
		if(ref == true){
			char newTxt[20];
			for(unsigned int i = 2; i < txt.size(); i++){
				int j = i - 2;
				newTxt[j] = txt[i];
			}
			int p = 0;
			bool v = false;
			for(int i = 0; i < 18; i++){
				if(newTxt[i] == '0' && v == false) p++;
				else cout << newTxt[i], v = true;
			}
			cout << endl;
			//long long unsigned int num = 0;
			//num = stoi(newTxt);
			//cout << num << endl;
			//cout << newTxt << endl;
		}
		else {
			
			cout << "INVALID DATA" << endl;
		}
	}
}
		
