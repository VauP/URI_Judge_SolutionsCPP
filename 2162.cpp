#include <bits/stdc++.h> 
using namespace std;

int main(){
	
	int cont, acrt = 1;
	
	cin >> cont;
	
	int vet[cont];
	
	for(int i = 0; i < cont; i++){
		cin >> vet[i];
	}
	
	if(cont==2 && vet[0]== vet[1]) acrt = 0;
    else
    {
        for(int i=2; i < cont; i++)
        {
            if(vet[i] >= vet[i-1] && vet[i-1] >= vet[i-2])
            {
                acrt = 0;
                break;
            }
            else if(vet[i] <= vet[i-1] && vet[i-1] <= vet[i-2])
            {
                acrt = 0;
                break;
            }
        }
    }
    printf((acrt==1)?"1\n":"0\n");
	
}
