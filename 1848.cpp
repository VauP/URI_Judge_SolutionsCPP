#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int main(){
	
	int cont = 3, sum;
	
	char txt[10];
	
	while(cont--){
		
		sum = 0;
	
		
		  while(true){
	         scanf("%s caw", txt);

             if(!strcmp(txt, "caw")) break;
		
	         if(txt[0] == '*') sum += 4;
	      	 if(txt[1] == '*') sum += 2;
	      	 if(txt[2] == '*') sum += 1;
			
		}
			cout << sum << endl;
	}
}
		
		
