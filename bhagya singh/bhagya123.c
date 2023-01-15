#include <stdio.h>
int main ()
{
    int a, b, c;
    printf (" enter a\n");
    scanf ("%d", &a);
    printf (" enter b\n");
    scanf ("%d", &b);
    printf (" enter c\n");
    scanf ("%d", &c);
    if (a>b && b>c)
    {
        printf (" a>b>c");
    }
    else if (b>a>c)
    {
        printf ("b>a && b>c");
    }
    else 
    {
        printf ( " BHAG BSDK");
        return 0;
    }
    
}