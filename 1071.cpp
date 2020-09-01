#include <iostream>
using namespace std;

int main()
{int x,y,c=0,m=0,r=0,i=0;
cin>>x>>y;
if(x>=y){m=x;r=y;}
else{m=y;r=x;}
i=r+1;
for(i; i<m;i++){if(i%2!=0){c+=i;}}
cout<<c<<endl;return 0;
}