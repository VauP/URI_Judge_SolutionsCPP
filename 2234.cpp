#include <iostream>
#include <iomanip>

using namespace std;

int main() {


		float consumidos, participantes;
		
		cin>>consumidos>>participantes;
		float variable = (consumidos/participantes);
		cout<<fixed<< setprecision(2)<<variable<<endl;
}
