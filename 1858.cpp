#include <iostream>
using namespace std;

int main(){
   
    int entrada, v1 , menor = 100, c = 0;
    cin>>entrada;

    for(int i = 1; i <= entrada; i++){
        cin>>v1;
        
        if(v1 < menor){
            menor = v1;
            c = i;
        }
    }
    cout<<c<<endl;

    return 0;
}