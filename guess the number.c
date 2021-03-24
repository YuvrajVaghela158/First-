#include<stdio.h>
int main()
{
    int n=7,x=14,a;
    printf("Guess the number ");
    for(n=7;n>=0;n--)
    {
        scanf("%d",&a);
    if (n>1,a > x)
    {
        printf("\nEnter a smaller number\n");
         printf("The number of chance left is %d", n);
    }
    else if (n>1,a < x)
    {
        printf("\nEnter a bigger number\n");
        printf("The number of chance left is %d", n);
    }
    else if (n>1,a == x)
    {
       printf("\nCongratulations you found the number\n");
        printf("The number of chances took is %d", 7 - n);
        break;
    }
    else if(n==0)
    {
        printf("\nYou lost the game\n");
        break;
    }

    }
    return 0;
}
