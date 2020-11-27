#include <iostream>

using namespace std;

int main(){
	
	 int hora, min, atraso;
   
	 while(scanf("%d:%d", &hora, &min) != EOF){
         atraso = (((hora * 60) + min + 60) - 480);
        
         if(atraso > 0) cout << "Atraso maximo: " << atraso << endl;

         else cout << "Atraso maximo: 0" << endl;
	 }

	 return 0;
}
