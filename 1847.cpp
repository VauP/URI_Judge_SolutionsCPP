#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	
	while (cin >> a >> b >> c)
	{
		if (a > b && b <= c) cout << ":)\n";
		else if (a < b && b >= c) cout << ":(\n";
		else if (a < b && b < c && ((b - a) > (c - b))) cout << ":(\n";
		else if (a < b && b < c && ((b - a) <= (c - b))) cout << ":)\n";
		else if (a > b && b > c && ((b - c) < (a - b))) cout << ":)\n";
		else if (a > b && b > c && ((b - c) >= (a - b))) cout << ":(\n";
		else if (a == b)
		{
			if (b < c) cout << ":)\n";
			else cout << ":(\n";
		}
	}
}
