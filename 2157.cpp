#include <iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;


int main(){
	
	int cont;
	
	cin >> cont;
	while(cont--)
	{
		int x,y;
		string finalTxt;
		cin >> x >> y;
		
		
		
		for(int i = x; i <= y; i++)
		{	
			ostringstream text;
			text << i;
			string variable = text.str();
			finalTxt += variable;
			
		}
		cout << finalTxt;
		reverse(finalTxt.begin(), finalTxt.end());
		
		
		
		cout << finalTxt << endl;
	}
}
