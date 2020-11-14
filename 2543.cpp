#include <iostream>

using namespace std;

int main(){

	int n, i, variable, variableCS;
	
	
	
	
	while (cin>>n>>i){
		
		int cont = 0;
		
		while(n--){
		
		cin>>variable>>variableCS;
		
		if(variable == i && variableCS == 0) cont++;
		
		}
		cout<<cont<<endl;
	}

	

}
