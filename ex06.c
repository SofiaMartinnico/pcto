#include <stdio.h>

int main ()
{
int a;
scanf("%d", &a);
if(a>10)
{
    printf("a è maggiore di 10\n");
}
else if(a == 5)
{
    printf ("a è uguale a 5\n");
}
else if(a>5)
{
    printf("a è maggiore di 5\n");
}
else
{
    printf("a è minore di 5\n");
}
}