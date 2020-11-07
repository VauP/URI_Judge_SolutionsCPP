#include <iostream>
#include <iomanip>
using namespace std;
	int main() {

        int a = 0,n = -1 ,sum = 0;
        cin >> a;
        while(n<1){
			cin>>n;
			}

        for(int i  = 0 ; i<= n-1; i++)
        {
            sum+=a+i;
        }
        cout<<sum<<endl;

}
