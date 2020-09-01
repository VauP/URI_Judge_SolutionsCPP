#include <iostream>
 
using namespace std;
 
int main() {
int a, v;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>v;
        if(v==0){cout<<"NULL"<<endl;}
        else if(v<=0 && v%2==0){cout<<"EVEN NEGATIVE"<<endl;}
        else if(v<=0 &&v%2==-1) {cout<<"ODD NEGATIVE"<<endl;}
        else if(v>=0 && v%2==0){cout<<"EVEN POSITIVE"<<endl;}
        else if(v>=0 && v%2==1)  {cout<<"ODD POSITIVE"<<endl;}
    }
return 0;
}