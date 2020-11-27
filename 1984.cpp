#include <iostream>
#include <string>

using namespace std;

int main(){
	
	long long int var;
	
	cin >> var;
	
	while(var > 0){
		
		cout << var % 10; 
		var = var / 10;
	}
	
	cout << endl;
	
	
}
