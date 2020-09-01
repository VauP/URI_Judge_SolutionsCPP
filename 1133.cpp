#include <iostream>
using namespace std;


int main(){
    int x,y,m=0,ma=0;

    cin>>x;
    cin>>y;
    ma=x;
    if(y>=ma){ma=y;m=x;}
    else {ma=x; m=y;}
    for(int i=m+1;i<ma;i++){
        if(i%5==2 ||i%5==3){cout<<i<<endl;}
    }
    return 0;
}
