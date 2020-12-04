#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
    cin>>a>>b>>c;
    vector<int> t(3);
    t[0]=(b*2)+(c*4);
    t[1]=(a*2)+(c*2);
    t[2]=(b*2)+(a*4);
    sort(t.begin(),t.end());
    cout<<t[0]<<endl;
    return 0;
}
