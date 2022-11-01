#include<stdio.h>
void centimeter();
void milimeters();
void inches();
int main()
{
	centimeter();
	milimeters();
	inches();
	return 0;
}
    void centimeter(){
    	int cm,kms;
    	printf("enter the distance in kms is=");
    	scanf("%d",&kms);
    	cm=kms*1000*100;
    	printf("distance between two cities in cm is=%d\n",cm);
    	
}
    void milimeters(){
    	int milimeters,kms;
    	printf("enter the distance in kms=");
    	scanf("%d",&kms);
    	milimeters=kms*1000*1000;
    	printf("distance between two cities in milimeters is=%d\n",milimeters);
    	
}
    void inches(){
    	int kms,inches;
    	printf("enter the distance in kms=");
    	scanf("%d",&kms);
    	inches=kms*39370;
    	printf("distance between two cities in inches is=%d",inches);
    	
	} 
	
