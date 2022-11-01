#include<stdio.h>
int main()
{
	int ag,h,e,m,p,c;
	printf("enter the hindi marks=");
	scanf("%d",&h);
	printf("enter the english marks=");
	scanf("%d",&e);
	printf("enter the mathematics marks=");
	scanf("%d",&m);
	printf("enter the physics marks=");
	scanf("%d",&p);
	printf("enter the chemistry marks=");
	scanf("%d",&c);
	ag=h+e+m+p+c;
	printf("aggregate marks of the student is equal to =%d",ag);
	return 0;
}
