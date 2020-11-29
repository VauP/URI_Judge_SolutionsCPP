#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char txt[500];
	gets(txt);
	int len = strlen(txt);
	
	if(len <= 140) 
	cout << "TWEET" << endl;
	
	else 
	cout << "MUTE" << endl;
	
	return 0;
}
