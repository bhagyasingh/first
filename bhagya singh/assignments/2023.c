// for checking a leap year
// first code of 2023
#include <stdio.h>
int main()
{
    int a;

    printf("enter the year\n");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        printf("the entered year is a leap year");
    }
    else
    {
        printf("the year is not a leap year");
    }

    return 0;
}
