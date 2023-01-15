#include <stdio.h>
int main ()
{
    int n,i, sum=0;
    printf ("enter the no so that you want to get the sum");
    scanf ("%d",&n);
    for (i=0; i < n+1; i++)
    {
        sum =sum +i;
    }
    printf ("your sum is %d", sum);
    return 0;
    
}