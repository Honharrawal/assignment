#include<stdio.h>
int main()
{
	int fd,cd;
	printf("enter the temperature of a city in farenheit degree is =");
	scanf("%d",&fd);
	cd=(fd-32)*5/9;
	printf("temperature of a city in centigrade degree is =%d",cd);
	return 0;
}
