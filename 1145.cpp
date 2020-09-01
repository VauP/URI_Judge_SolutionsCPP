#include <iostream>
using namespace std;

int main(){
   int x,y,c=1;
   cin>>x;
   cin>>y;

   for(int i=1;i<=y;i++){
       if(c==x){cout<<i<<endl;c=1;}
       else {cout<<i<<" ";c++;}
   }
    return 0;}