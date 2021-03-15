#include<stdio.h>
main()
{
	float dis,fe,in,me,cen;
	printf("\nPlease enter the distance between two districts in km : ");
	scanf("%f",&dis);
	fe=3280.84*dis;
	printf("\n\tThe distance in feet is %.2f",fe);
	in=39370.08*dis;
	printf("\n\tThe distance in inches is %.2f",in);
	me=1000*dis;
	printf("\n\tThe distance in meter is %.2f",me);
	cen=100000*dis;
	printf("\n\tThe distance in centimeter is %.2f",cen);
}
