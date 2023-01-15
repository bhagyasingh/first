#include <stdio.h>
int main ()
{
    int a,i=0;
    printf ("ENTER THE NO.");
    scanf ("%d", &a);
    while (i<11)
    {
        printf ("%d*%d=%d\n", a, i, a*i);
        i=i+1;
    }
    return 0;

}