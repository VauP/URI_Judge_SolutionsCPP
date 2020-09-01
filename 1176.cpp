#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    long long vet[61];
    int t,n;
    vet[0]=0;
    vet[1]=1;
    cin>>t;
    for(int i=2;i<=60;i++){
	  vet[i]=vet[i-2]+vet[i-1];
	  }
			
    for(int i=1;i<=t;i++){
		cin>>n;
        cout<<"Fib("<<n<<") = "<<vet[n]<<endl;
        }
}
