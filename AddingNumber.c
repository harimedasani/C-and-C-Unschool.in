#include<stdio.h>
int main()
{
	int sum=0,num;
	do{
		printf("Enter the number:");
		scanf("%d",&num);
		sum+=num;
	}while(num!=0);
	printf("The sum of the numbers is %d",sum);
	return 0;
}
