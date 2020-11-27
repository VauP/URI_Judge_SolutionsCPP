#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	double v, d;
	
	while(scanf("%lf %lf", &v, &d) != EOF){
		
		double r = d/2;
		double a =  pow(r, 2) * 3.14;
		cout << fixed << setprecision(2) << "ALTURA = " << v/a << endl;
		cout << fixed << setprecision(2) << "AREA = " << a << endl;
		
		}
}
