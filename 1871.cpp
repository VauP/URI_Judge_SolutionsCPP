#include <iostream>
 
using namespace std;
 
int main() {
  
  int m,n, v[15];
  
  while(scanf("%d %d", &m, &n) && (m!=0 || n!=0) )
  {
      int sum = m + n;
      
      for(int i = 0; i < 11; i++){
          
          v[i] = sum % 10;
          sum = sum / 10;
      }
      
      for(int i = 10; i>=0; i--){
          
          if(v[i] != 0 ) cout<<v[i];
      }
      cout<<endl;
      
  }
    cout<<endl;
    return 0;
}
