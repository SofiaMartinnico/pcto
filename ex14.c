#include <stdio.h>

int main ()
{
    char parola[5] = {'c','i','a','o'};
    int b = 0;
    while(parola[b]!='\0')
    {
        scanf("%c", &parola[b]);
        b = b + 1;
    }
}