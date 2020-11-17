#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int n;
	double x = 0;
	
	cin >> n;
	
	while(n--){
		
		x += 6;
		x = 1/x;
	}
	
	x += 3;
	
	cout << fixed << setprecision(10) << x << endl;
}
