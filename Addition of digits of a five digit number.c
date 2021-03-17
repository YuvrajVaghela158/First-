#include<stdio.h>
int main()
{
    int n,m,p,o,s;
    printf("Enter any five digit number: ");
    scanf("%d",&n);
    if(10000<=n && n<=99999)
    {
        for(n,m=10,o=1,p=0,s=0;m<=1000000,o<=10000;m=m*10,o=o*10)
        {
            p=n%m;
            p=p/o;
            s+=p;
        }
        printf("\nThe sum for the five digits in the entered number is %d\n",s);
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
