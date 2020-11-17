#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int id, num, cont;
	double value = 0;
	
	
	cin >> cont;
	
	while(cont--){
		
		cin >> id >> num;
		
		if( id == 1001) value+= 1.50 * num;
		if( id == 1002) value+= 2.50 * num;
		if( id == 1003) value+= 3.50 * num;
		if( id == 1004) value+= 4.50 * num;
		if( id == 1005) value+= 5.50 * num;
	}
	
	cout << fixed << setprecision(2) << value << endl;
}
