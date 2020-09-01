#include <iostream>
 
using namespace std;
 
int main() {
   int a[5];
    int p=0;
    cin >>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    for(int i=0;i<=4;i++){
    if(a[i]%2==0){p++;}}
    cout<<""<<p<<" valores pares"<<endl;
    return 0;
}