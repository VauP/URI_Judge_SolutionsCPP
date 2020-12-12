#include <iostream>

using namespace std;

int main(){
	int c, a, b, j;
	cin >> c;
	 for (int i = 0; i < c; ++i){
		
		cin >> a >> b;
		int menor;
		if(a <= b) menor = a;
		else menor = b;
		for(j = menor; j > 0; j--){
			if(j == (a/(a/j)) && j == (b/(b/j))) 
			{break;}
		}
		cout << j << endl;
	}
}
