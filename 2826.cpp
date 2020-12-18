#include <bits/stdc++.h>
using namespace std;

int main(){
	char palavra1[25], palavra2[25];

	scanf("%s %s", palavra1, palavra2);

	if (strcmp(palavra1, palavra2) > 0)
	{	
		printf("%s\n", palavra2);
		printf("%s\n", palavra1);
	}
	else if (strcmp(palavra1, palavra2) < 0)
	{
		printf("%s\n", palavra1);
		printf("%s\n", palavra2);
	}
}
