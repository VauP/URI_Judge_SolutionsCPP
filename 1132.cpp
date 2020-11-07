
    #include <iostream>
    using namespace std;

    int main(){
    
        int x, y, menor = 99999, maior = 0, s =0;
        std::cin>>x>>y;
        
        if(x > y){
            maior = x;
            menor = y;
        }
        else{
            maior = y;
            menor = x;
        }

        for(int i = menor; i<= maior; i++){
            if(i % 13 != 0){
                s+=i;
            }
            
        }

        cout<<s<<endl;
        return 0;
    }