#include <iostream>


using namespace std;

 void converter(int x);

int main(){
	
	int num;
	
	int dec[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string rom[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	
	
	cin >> num;
	
	int i = 0;
	
	while(num){
		
		while( num / dec[i] )
		{
			cout << rom[i];
			num -= dec[i];
		}
		i++;
	}
	cout << endl;

}

