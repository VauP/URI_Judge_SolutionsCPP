#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int cont;
	cin >> cont;
	
	while(cont--)
	{
		int total = 0;
		string txt;
		cin >> txt;
		
		for(int i = 0; i <= txt.size(); i++)
		{
			switch(txt[i]){
				
				case '1': total += 2;
				break;
				
				case '2': total += 5;
				break;
				
				case '3': total += 5;
				break;
				
				case '4': total += 4;
				break;
				
				case '5': total += 5;
				break;
				
				case '6': total += 6;
				break;
				
				case '7': total += 3;
				break;
				
				case '8': total += 7;
				break;
				
				case '9': total += 6;
				break;
				
				case '0': total += 6;
				break;
			}
				
			
		}
		
		cout << total << " leds" << endl;
		
	}
	
}
