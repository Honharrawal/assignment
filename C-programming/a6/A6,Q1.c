#include<stdio.h>
void rectangle();
void square();
void circle();
int main()
{
	rectangle();
	 square();
	 circle();
	 return 0;
}

	void rectangle(){
	
	int a,l,b,p;
	printf("enter the length=");
	scanf("%d",&l);
	printf("enter the breadth=");
	scanf("%d",&b);
	a=l*b;
	p=2*(l+b);
	printf("Area of rectangle is equal to%d\n",a);
	printf("perimeter of a rectangle is equal to%d",p);
}
	

		void square(){
		
	int s,A,P;
	printf("enter the side=");
	scanf("%d",&s);
	A=s*s;
	P=6*s;
	printf("Area of square is equal to%d",A);
	printf("perimeter of square is equal to%d",P);
}
	void circle(){
	
	int r,pie=3.14,R,Q;
	printf("enter the radius=");
	scanf("%d",&r);
	R=pie*r*r;
	Q=2*pie*r;
	printf("Area of circle is equal to%d",R);
	printf("perimeter of a circle is equal to%d",Q);
	
}
	

	

