#include <iostream>

using namespace std;

int main(){

	int cont;
	
	while(scanf("%d", &cont) != EOF){
		
	int lesmas, nv1 = 0, nv2 = 0, nv3 = 0;
		while(cont --){
	
	cin>>lesmas;
	
	if(lesmas >= 20) nv3++;
	if(lesmas >= 10 && lesmas < 20) nv2++;
	if(lesmas < 10) nv1++;
}
	
	
	if(nv3 != 0) cout << "3" << endl;
	else if(nv2 != 0) cout << "2" << endl;
	else if(nv1 != 0) cout << "1" << endl;
	
	}
}
