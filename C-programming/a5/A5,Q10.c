#include<stdio.h>
int main()
{
	int tm,H,E,M,P,C,per;
	printf("enter hindi marks=");
	scanf("%d",&H);
	printf("enter english marks=");
	scanf("%d",&E);
	printf("enter Mathenatics marks=");
	scanf("%d",&M);
	printf("enter physics marks=");
	scanf("%d",&P);
	printf("enter chemistry marks=");
	scanf("%d",&C);
	tm=H+E+M+P+C;
	printf("total marks of the student is %d\n",tm);
	per=100*tm/500;
	printf("percentage of the student is equal to %d",per);
	return 0;
}
