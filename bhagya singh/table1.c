#include<stdio.h>
int main()
{
    int a, i=0;
    printf ("Enter the no. \n");
    scanf("%d",&a);
    do
    {
        i=i+1;
        printf ("%d*%d=\n%d\n", a,i,a*i);
    } while (i<=9);
    return 0;
}