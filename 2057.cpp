#include <iostream>


using namespace std;

int main(){
	
	int s, t, f;
	
	cin >> s >> t >> f;
	
	int total =  s + t + f ;
	
	if(total < 24 && total >= 0) cout << total << endl;
	else if( total > 24) total = total - 24, cout << total << endl;
	else if(total < 0) total = total + 24, cout << total << endl;
	if(total == 24) cout << "0" << endl;
	
	
	
}
