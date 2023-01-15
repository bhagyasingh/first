#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("enter your marks of hindi\n");
    scanf("%d", &b);
        printf("enter your marks of english\n");
    scanf("%d", &a);
        printf("enter your marks of physics\n");

    scanf("%d", &c);
        printf("enter your marks of chemistry\n");

    scanf("%d", &e);
        printf("enter your marks of maths\n");

    scanf("%d", &d);
        printf("the result is :  %d percentage\n", f==(a+ b+ c+ d+ e)/5);

    return 0;
    if (f>=90)
    {
        printf("your grade is A+"); 
    }
    else if (f>=70 )
    {
        printf ("your grade is A");
    }
    else if (f>=60)
    {
        printf ("your grade is B ");
    }
    else if (f>=50)
    {
        printf ("your grade is C");
    }
    else if (f>=33)
    {
        printf("your grade is D");
    }
    else
    {
        printf ("you are fail");
    }
    return 0;
    
}