#include <iomanip>
#include <iostream>


using namespace std;

int main(){
	
	double antigo, novo;
	
	cin >> antigo >> novo;
	
	cout << fixed << setprecision(2) << (((novo * 100)/ antigo) - 100) <<"%" << endl;

}
