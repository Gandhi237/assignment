#include<stdio.h>
//Swapping Three numbers
int main()
{
	int a, b, c;
	printf("  Enter values of a, b and c\n");
	scanf("\n%d\n %d \n%d",&a, &b, &c);
	printf("Before swapping:\n");
	printf("a=%d, b=%d, c=%d",a, b, c);
	a=a+b;
	b=a-b;
	a=a-b;
	c=c+b;
	b=c-b;
	c=c-b;
	printf("\nAfter swapping:\n");
	printf("a=%d, b=%d, c=%d",a, b, c);
}
