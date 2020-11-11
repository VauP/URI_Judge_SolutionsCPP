#include <iostream>

using namespace std;

int main()	
{
   int num;
   
   cin>>num;
   
   if(num == 0) cout<<'E'<<endl;
   if(num > 0 && num <= 35) cout<<'D'<<endl;
   if(num > 35 && num <= 60) cout<<'C'<<endl;
   if(num > 60 && num <= 85) cout<<'B'<<endl;
   if(num > 85 && num <= 100) cout<<'A'<<endl;
}
