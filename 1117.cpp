#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double a = -1, b = -1, med;
	
	while(a < 0 || a > 10){
		
		cin>>a;
		
		if(a < 0 || a > 10) cout << "nota invalida" << endl;
		
		
		}
	
	while( b < 0 || b > 10){
		
		cin>> b;
		
		if(b < 0 || b > 10) cout << "nota invalida" << endl;
		
	}
	
	med = ( a + b ) / 2;
	
	cout << "media = ";
	cout << fixed << setprecision (2) << med << endl;
}	
	
