#include<stdio.h>
void totalmarks();
void percentage();
void averagemarks();
int main()
{
	totalmarks();
	percentage();
	averagemarks();
	return 0;
}
     void totalmarks(){
     	int h,e,m,p,c,tm;
     	printf("enter Hindi mark=");
     	scanf("%d",&h);
     	printf("enter English mark=");
     	scanf("%d",&e);
     	printf("enter Mathematics mark=");
     	scanf("%d",&m);
     	printf("enter Physics mark=");
     	scanf("%d",&p);
     	printf("enter Chemistry mark=");
     	scanf("%d",&c);
     	tm=h+e+m+p+c;
     	printf("total marks of the student is =%d\n",tm);
     	
}
     void percentage(){
     	int h,e,m,p,c,tm,per;
     	printf("enter Hindi mark=");
     	scanf("%d",&h);
     	printf("enter English mark=");
     	scanf("%d",&e);
     	printf("enter Mathematics mark=");
     	scanf("%d",&m);
     	printf("enter Physics mark=");
     	scanf("%d",&p);
     	printf("enter Chemistry mark=");
     	scanf("%d",&c);
     	tm=h+e+m+p+c;
     	per=100*tm/500;
     	printf("percentage of the student is=%d\n",per);
     }
     
     void averagemarks(){
     		int h,e,m,p,c,tm,per,ag;
     	printf("enter Hindi mark=");
     	scanf("%d",&h);
     	printf("enter English mark=");
     	scanf("%d",&e);
     	printf("enter Mathematics mark=");
     	scanf("%d",&m);
     	printf("enter Physics mark=");
     	scanf("%d",&p);
     	printf("enter Chemistry mark=");
     	scanf("%d",&c);
     	tm=h+e+m+p+c;
     	ag=tm/5;
     	printf("average marks of the student is%d=",ag);
        
}
     	
	 
	 
	 
