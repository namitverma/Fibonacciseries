#include<stdio.h>
int main()
{
	int a=1;
	int b=1;
	int i;
	printf("%d,", a);
	printf("%d,", b);
	int c= a+b;
	printf("%d,", c);
	for (i=0; i<10; i=i+1)
{		
    	a=b;
		b=c;
		c=a+b;
		printf("%d,", c);  //

	}

return 0;
}