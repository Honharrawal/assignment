#include<stdio.h>
int main()
{
	int s,da,hr,ts;
	printf("enter the aman's basic salary is =");
	scanf("%d",&s);
	printf("enter the dearness allowance is= ");
	scanf("%d",&da);
	printf("enter the house rent allowance is =");
	scanf("%d",&hr);
	ts=s+da+hr;
	printf("aman's total salary is =%d",ts);
	return 0;
}
