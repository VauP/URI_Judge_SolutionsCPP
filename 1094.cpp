#include <iostream>
#include <iomanip>
using namespace std;

int main()
{int n=0,qntd=0,t=0;
float ts=0,tr=0,tc=0;
char ti;
cin>>n;
for(int i=1;i<=n;i++) {
    cin >> qntd;
    cin >> ti;
    t += qntd;
    if (ti == 'S') { ts += qntd; }
    if (ti == 'R') { tr += qntd; }
    if (ti == 'C') { tc += qntd; }}
cout<<"Total: "<<t<<" cobaias"<<endl;
cout<<"Total de coelhos: "<<tc<<endl;
cout<<"Total de ratos: "<<tr<<endl;
cout<<"Total de sapos: "<<ts<<endl;
cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(tc*100)/t<<" %"<<endl;
cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(tr*100)/t<<" %"<<endl;
cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(ts*100)/t<<" %"<<endl;
return 0;}