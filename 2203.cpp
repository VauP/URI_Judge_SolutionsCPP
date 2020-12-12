#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x, y, xI, yI, v, r, r2;
	
	while(cin >> x){
		cin >> y >> xI >> yI >> v >> r >> r2;
	
		double dif = sqrt(pow(xI - x, 2.0) + pow(yI - y, 2.0)) + (v * 1.50);

		if(dif > (r+r2))  cout << "N" << endl;
		else cout << "Y" << endl;
	}
}
