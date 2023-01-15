#include <stdio.h>
int main ()
{
    int a ;
    printf (" enter the weekday no.\n");
    scanf ("%d ", &a);
    switch (a)
    {
    case 1:
        printf ("thats monday");
        break;
        case 2:
        printf ("tuesday");
        break;
        case 3 :
        printf ("wednesday");
        break;
        case 4:
        printf (" thursday");
        break;
        case 5:
        printf ("friday");
        break;
        case 6:
        printf ("thats saturday");
        break;
        case 7:
        printf ("thats SUNDAY");
        break;
        


    
    default:
    printf ("TU CHUTIA HAI");
        break;
    }
return 0;


}