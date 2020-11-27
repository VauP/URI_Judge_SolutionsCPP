#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int cont, len;
    char txt[10100];
    cin >> cont;
    while(cont--)
    {
        cin >> txt;
        len = strlen(txt);
        printf("%.2lf\n", len*.01);
    }
    return 0;
}
