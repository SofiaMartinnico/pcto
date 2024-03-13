#include <stdio.h>

int main ()
{
    int b=0;
    char parola[30];
    printf("scrivi la parola");
    scanf("%[^\n]s", parola);
    while(parola[b]!='\0')
    {
        if((parola[b]>=65) && (parola[b]<=90))
        printf("%c\n", parola[b]+32);

    else if((parola[b]>=92) && (parola[b]<=122))
    printf("%c\n", parola[b]-32);
b=b+1;
    }
}
