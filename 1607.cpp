#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	char alp[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	cin >> t;
	for(int i = 0; i < t; i++){
		string a, b;
		cin >> a >> b;
		int cont = 0;
		for(unsigned int x = 0; x < a.length(); x++){
			
				int  posA;		
				for(int proc = 0; proc < 26; proc++){
					if(a[x] == alp[proc]) {posA = proc; break;}
				}
					int cr = posA;
				while(true){
					
					if(alp[cr] == b[x]) {break;}
					else cont++;
					cr++;
					if(cr == 26) cr = 0;
					
				}
			
		}
		cout << cont << endl;
	}
	
}
