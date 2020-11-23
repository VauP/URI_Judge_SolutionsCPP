#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	
	char O;	
	
	int cont = 1;
	double M[12][12];
	
	double var, total = 0;
	
	cin >> O;
	
	for(int i = 0; i < 12; i++){
		
		for(int j = 0; j < 12; j++){
			cin >> var;
		    M[i][j] = var;
		}
	}
	
	for(int i = 0; i < 11; i++){
			
			int ref, j;
			
				if(i <= 5)
				{
					for(j = 0; j < i; j++)
					{
						total += M[i][j];
					}
				}
				
				else
				{
					
					for(j = 0, ref = i - cont; j < ref; j++)
						{
							total += M[i][j];	
							
						}	
						cont = cont + 2;
				}
	}
	
	if(O == 'S') cout << fixed << setprecision(1) << total << endl;
	else if(O == 'M') cout << fixed << setprecision(1) << total/30 << endl;
	
}
		

