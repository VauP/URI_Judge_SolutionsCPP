#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	
	char O;	
	
	
	double M[12][12];
	
	double var, total = 0;
	
	cin >> O;
	
	for(int i = 0; i < 12; i++){
		
		for(int j = 0; j < 12; j++){
			cin >> var;
		    M[i][j] = var;
		}
		
	}
	
	for(int i = 0; i < 5; i++){
		
		int ref, j;
		
		for(j = i + 1, ref = 11 - i; j < ref; j++)
		{
			total += M[i][j];
		}
	}
	
	if(O == 'S') cout << fixed << setprecision(1) << total << endl;
	else if(O == 'M') cout << fixed << setprecision(1) << total/30 << endl;
	
}
		

