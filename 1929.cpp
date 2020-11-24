#include<bits/stdc++.h>

using namespace std;

int main()
{
    int M[4];
    
    for(int i=0;i<4;i++)
        cin>>M[i];
        
    sort(M,M+4);	
    
    if(M[0]+M[1]>M[2])
        cout<< "S" << endl;
        
    else if(M[0]+M[2]>M[3])
        cout<< "S" << endl;
        
    else if(M[1]+M[2]>M[3])
		cout<< "S" << endl;
    
    else
        cout<< "N" << endl;
    return 0;
}
