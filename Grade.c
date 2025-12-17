#include <stdio.h>

int main()
{
    float pre;
    printf("Enter your percentage :  ");
    scanf("%f", &pre);

    if (pre >= 90 &&pre <= 100)
    {
        printf("Your Grade is A+");
    }
    else if (pre >= 80 && pre < 90)
    {
        printf("Your Grade is A");
    }
    else if (pre >= 70 && pre < 80)
    {
        printf("Your Grade is B+");
    }
    else if (pre >= 60 && pre < 70)
    {
        printf("Your Grade is B");
    }
    else if (pre >= 50 && pre < 60)
    {
        printf("Your Grade is C+");
    }
    else if (pre >= 40 && pre < 50)
    {
        printf("Your Grade is C");
    }
    else if (pre < 40)
    {
        printf("NG");
    }
    else
    {
        printf("invalide precentage");
    }

    return 0;
}