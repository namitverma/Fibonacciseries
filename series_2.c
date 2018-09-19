#include<stdio.h>
int main()
{
	int a, b, c, i;
	a=1;
	b=1;
	c=0;

	for (i=0; i<10; i=i+1)
	{
		a=b;
		b=c;
		c=a+b;
		printf("%d\n", c);

	}

	return 0;
}