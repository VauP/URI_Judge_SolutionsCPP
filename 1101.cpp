#include <iostream>
using namespace std;

int main()
{int m=0,n=0,sm=0,me=0,ma=0;

    for(int i=0;i<i+1;i++){
        cin>>m;
        cin>>n;
        if(m>=n){ma=m;me=n;}
        else{ ma=n;me=m;}
        if(m<=0 || n <=0) break;
        for(int i=me;i<=ma;i++){
            sm+=i;
            cout<<i<<" ";}
        cout<<"Sum="<<sm<<endl;
        sm=0;}return 0;
}