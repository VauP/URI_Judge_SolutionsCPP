#include <iostream>

int ver(int n, int m);

using namespace std;

int main()
{
    int nc,n,m,s,i;
    cin>>nc;
    for( i=1;i<=nc;i++){
        cin>>n>>m;
        s=ver(n,m);
        cout<<"Case "<<i<<": "<<s<<endl;
    }
}

int ver(int n, int m) {
    if(n==1){return 1;}
    else {  return (ver(n-1,m)+m-1)%n+1;}

}