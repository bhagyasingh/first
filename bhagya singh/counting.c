#include <stdio.h>
int main()
{
    int a, index = 0 ;
    printf(" enter the number");
    scanf("%d", &a);
    do
    {
        printf("%d\n", index );
        index = index + 1;

    } while (index < a);

    return 0;
}
