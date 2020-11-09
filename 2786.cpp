#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    
    int l,c,l1=0,l2 =0;
		
	cin>>l>>c;
	l1 = ((l*c) + (l-1)*(c-1));
	l2 = ((l-1)*2) + ((c-1)*2);
	
	cout<<l1<<endl;
	cout<<l2<<endl;
    return 0;
}
