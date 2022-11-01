#include<stdio.h>
void add();
void sub();
void mul();
void div();
int main()
{
	 add();
	 sub();
	 mul();
	 div();
	return 0;
}
     void add(){
     	int a,b,c;
     	printf("enter the first variable is=");
     	scanf("%d",&a);
     	printf("enter the seocnd variable is=");
     	scanf("%d",&b);
     	c=a+b;
     	printf("Addition of two number is=%d\n",c);
     	
	 }
	  void sub(){
	  		int a,b,c;
     	printf("enter the first variable is=");
     	scanf("%d",&a);
     	printf("enter the seocnd variable is=");
     	scanf("%d",&b);
     	c=a-b;
     	printf("Subtraction of two number is=%d\n",c);
     }
      void mul(){
      		int a,b,c;
     	printf("enter the first variable is=");
     	scanf("%d",&a);
     	printf("enter the seocnd variable is=");
     	scanf("%d",&b);
     	c=a*b;
     	printf("Multiplication of two number is=%d\n",c);
     	
	  }
	  void div(){
	  		int a,b,c;
     	printf("enter the first variable is=");
     	scanf("%d",&a);
     	printf("enter the seocnd variable is=");
     	scanf("%d",&b);
     	c=a/b;
     	printf("Division of two number is=%d\n",c);
     	
	  }
	  
