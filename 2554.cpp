#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n, d, a, v;
	while(cin >> n >> d){
		bool ver = false;
		string data;

		for(int i = 0; i < d; i++){
			a = 0;
			cin >> data;
			for(int j = 0; j < n; j++){
				cin >> v;
				a += v;
			}
			if(a == n && !ver){
				cout << data << endl;
				ver = true;
			}
		}
		if(!ver) cout << "Pizza antes de FdI" << endl;	
	}
}
