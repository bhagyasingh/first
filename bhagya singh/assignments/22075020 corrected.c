// Assignment 4
// Bhagya Singh CSE (B.Tech)
//  Roll no. 22075020
//  Compare three no.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a\n");
    scanf("%d", &a);
    printf("Enter b\n");
    scanf("%d", &b);
    printf("Enter c\n");
    scanf("%d", &c);

    if (a > b && a > c && a!=b && b!=c)
    {
        printf("'a' is the largest number\n");
        if (b > c)
        {
            printf("'c' is the smallest number\n ");
        }
        else
        {
            printf("'b' is the smallest number");
        }
    }
    else if (b > a && b > c && a!=b && b!=c )
    {
        printf("'b' is the largest number\n");
        if (a > c)
        {
            printf("'c' is the smallest number\n ");
        }
        else
        {
            printf("'a' is the smallest number");
        }
    }
    else if (c > b && c > a && a!=b && b!=c)
    {
        printf("'c' is the largest number\n");
        if (b > a)
        {
            printf("'a' is the smallest number\n ");
        }
        else
        {
            printf("'b' is the smallest number");
        }
    }
    else if (a == b && c!=a)
    {
        if (c > a)
        {
            printf("'c' is largest number\n 'a' and 'b' are equal");
        }
        else
        {
            printf("'c' is smallest number\n 'a' and 'b' are equal");
        }
    }
    else if (a == c && b!=a)
    {
        if (b > a)
        {
            printf("'b' is largest number\n 'a' and 'c' are equal");
        }
        else
        {
            printf("'b' is smallest number\n 'a' and 'c' are equal");
        }
    }
    else if (b == c && a!=b)
    {
        if (a > b)
        {
            printf("'a' is largest number\n 'c' and 'b' are equal");
        }
        else
        {
            printf("'a' is smallest number\n 'c' and 'b' are equal");
        }
    }
    else
    {
        printf(" all numbers are equal");
    }

    return 0;
}
