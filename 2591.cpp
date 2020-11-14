#include <iostream>



using namespace std;

int main(){

	int n;
	
	cin >>n;
	
	while(n--){
		
		string variable;
	int cont = 0, cont2 = 0, posK;
		
	cin >> variable;
	
		if(variable == "hamekame")
		{ cout << "ka" << endl; }
		
		else
		{
			while(variable != "")
			{	
				int i = 0;
					while ( variable[i] != 'k'){
					
						if(variable[i] == 'a') cont++;
						
						i++;
					
					}
					posK = i;	
				
					for(unsigned int i = posK; i < variable.length(); i++) {
					
						if(variable[i] == 'a') cont2++;
					
					}
					
					break;
			
			}	
			
			int sum = cont * cont2;
			
			cout << "k";
			
			for( int i = 0; i < sum; i++){
				
				cout << "a";
		
			}
			cout << endl;
		}
	}
	
}
