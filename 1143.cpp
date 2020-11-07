
#include <iostream>
using namespace std;

int main(){
   
    int entrada, c = 1;
    cin>>entrada;

    while(c != entrada + 1){

        cout<<c<<" "<<c*c<<" "<<c*c*c<<endl;
        c++;
    }

    return 0;
}