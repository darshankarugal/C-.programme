#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter two integers: ");
	scanf("%d %d , &a, &b");
	printf("Sum = %d\n", a + b);
	printf("Difference = %d\n", a - b);
	printf("Product =%d\n", a * b);
	if (b!= 0)
    {
    	printf("quotient =%d\n", a / b);
        printf("Reminder =%d\n", a % b);
	}
	else
	{
		printf("Division and reminder are not possible.\n");
	}
	return 0;
}