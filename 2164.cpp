#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
   double n,x,y, fib;
   
   cin>>n;
   

   x = (1+sqrt(5))/2.0;
   y = (1-sqrt(5))/2.0;
   
   fib = (pow(x,n) - pow(y,n))/sqrt(5);
   
   cout<<fixed<<setprecision(1)<<fib<<endl;
   
   return 0;
}
