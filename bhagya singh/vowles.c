#include <stdio.h>
int main()
{
    char character;
    printf("enter the character you want to check\n");

    scanf("%c", &character);
    
    

     if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {

        switch (character)
        {
        
        case 'a':
            printf("this is a vowel");

            break;
        case 'e':
            printf("this is a vowel");

            break;
        case 'i':
            printf("this is a vowel");

            break;
        case 'o':
            printf("this is a vowel");

            break;
        case 'u':
            printf("this is a vowel");

            break;
        case 'A':
            printf("this is a vowel");

            break;
        case 'E':
            printf("this is a vowel");

            break;
        case 'I':
            printf("this is a vowel");

            break;
        case 'O':
            printf("this is a vowel");

            break;
        case 'U':
            printf("this is a vowel");

            break;

        default:
            printf("this is a consonant ");
            break;
        }
    }
    else
    {
        printf(" this is not an alphabet");
    }
    return 0;
}
