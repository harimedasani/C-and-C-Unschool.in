#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Sum of %d and %d is %d \n",a,b,(a+b));
	printf("Difference of %d and %d is %d \n",a,b,(a-b));
	printf("Product of %d and %d is %d \n",a,b,(a*b));
	printf("On dividing %d by %d quotient is %d \n",a,b,(a/b));
	printf("On dividing %d by %d remainder is %d \n",a,b,(a%b));
	return 0;
}
