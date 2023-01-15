#include <stdio.h>
int main()
{
    int a, i=0;
    printf ("ENTER THE NO.");
    scanf ("%d",&a);
    do
    {
        i=i+1;
        printf ("%d*%d=%d\n", a,i, a*i);
    } while (i<10);
    return 0;
    
}