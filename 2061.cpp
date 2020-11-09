#include <iostream>

using namespace std;

int main() {

	int abertas,contador;
	string text;
	
	cin>>abertas>>contador;
	
	while(contador--)
	{
		cin>>text;
		if(text == "fechou") abertas++;
		if(text == "clicou") abertas--;
		
		}
	cout<<abertas<<endl;
	

}
