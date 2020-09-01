#include <iostream>
using namespace std;


int main(){ long pa,pb;
int t;
double g1,g2;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>pa;
    cin>>pb;
    cin>>g1;
    cin>>g2;
    int temp=0;

    while(pa<=pb){
        pa+=pa*g1/100;
        pb+=pb*g2/100;
        temp++;
        if(temp>100) break;
    }
    if(temp<=100){cout<<temp<<" anos."<<endl;}
    else cout<<"Mais de 1 seculo."<<endl;
}
return 0;}