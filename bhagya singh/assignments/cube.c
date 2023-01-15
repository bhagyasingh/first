#include<stdio.h>
int main()
{   int i, n;
    printf ("no");
    scanf ("%d",&n);
    for ( i = 0; i < n+1; i++)
    {
        
        printf ("the no is %dand its cube is %d\n", i, i*i*i);
    }
    
return 0;
}