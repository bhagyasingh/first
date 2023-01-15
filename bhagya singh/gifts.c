#include<stdio.h>
int main ()
{
    int a , b;
    printf (" enter your maths marks\n \a");
    scanf("%d", &a);
    printf ("enter your science marks\n \a");
    scanf ("%d", &b);
    
    if (a>=33 && b>=33)
    {
        printf (" you are paid 45 rs. from me");
    }
    
    
    else if (a>=33 || b>=33)
    {
        if (a>=33)
        {
            printf (" 10 rs.");
        }
        else 
        {
            printf (" 2 rs.");
        }
    }
    else 
    {
        printf ( " tu lund hai");
    }
    return 0;
}

