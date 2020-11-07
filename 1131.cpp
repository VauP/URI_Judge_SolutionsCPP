#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(void){
    int c = 1, wy = 0, wx = 0;
    for(;;){
    int x, y, r, e = 0;
   
    cin>>x;
    cin>>y; 
    if(x>y){
        wx++;
       
    }
    else{
        wy++;
        
    }
    if(x == y){
        e++;
    }
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    cin>>r;

    if(r==2){
        cout<<c<<" grenais"<<endl;
        cout<<"Inter:"<<wx<<endl;
        cout<<"Gremio:"<<wy<<endl;
        cout<<"Empates:"<<e<<endl;
        if(wx>wy){ cout<<"Inter venceu mais"<<endl; }
        else if(wx<wy) { cout<<"Gremio venceu mais"<<endl; }
        break;

    }
    
    c++;

    
    }
    return 0;
}