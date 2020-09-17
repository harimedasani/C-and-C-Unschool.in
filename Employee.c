#include<stdio.h>
struct Employee{
	char Name[20];
	int Employee_ID;
	int Experience;
	float salary;
}E[10];
int main(){
	int i,n;
	printf("Enter the number of employee Details (<=10):");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Employee name:");
		scanf("%s",&E[i].Name);
		printf("\nEnter the Employee ID:");
		scanf("%d",&E[i].Employee_ID);
		printf("\nEnter the Employee Experience:");
		scanf("%d",&E[i].Experience);
		printf("\nEnter the Employee Salary:");
		scanf("%f",&E[i].salary);
	}
	for(i=0;i<n;i++)
	{
		printf("Employee Name is %s \n",E[i].Name);
		printf("Employee ID is:%d\n",E[i].Employee_ID);
		printf("Experience is:%d\n",E[i].Experience);
		printf("Salary is %f \n",E[i].salary);
	}
	return 0;
	
}
