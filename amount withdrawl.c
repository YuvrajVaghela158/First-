#include<stdio.h>
int main()
{
	int to,oh,fto,ft,teo,te,rem;
	printf("\nPlease enter the amount to be withdrawl Rs ");
	scanf("%d",&to);
	oh=to/100;
	printf("\n\nThe required notes of Rs 100 are %d.",oh);
	fto=to-oh*100;
	ft=fto/50;
	printf("\nThe required notes of Rs 50 are %d.",ft);
	teo=to-oh*100-ft*50;
	te=teo/10;
	printf("\nThe required notes of Rs 10 are %d.",te);
	rem=to-oh*100-ft*50-te*10;
	printf("\nThe remaining amount is Rs %d.",rem);
	return 0;
}

