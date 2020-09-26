#include<stdio.h>  
#include<stdlib.h>
int fun();
void withdraw();  //function prototype
void deposit();
float amt,bal=10000,dep,rem; //declaring global variables and intialize the value
int main(){
	int pin;
	printf("******Welcome To Your Bank******\n");
	printf("Enter your pin number please:\n");
	scanf("%d",&pin);
	if(pin==5468){
		fun(); //calling the function
	}
	else{
		printf("Incorrect Pin\n");
	}
	return 0;
}
int fun(){
	int choice;
	char ans;
	printf("Enter any option to be served\n");
	printf("1. Balance Enquiry\n2. Cash Withdraw\n3. Deposit Cash\n4. Exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice){		
		case 1: printf("Your Bank balance is: %.2f\n",bal);
				printf("Do you want to perform another operation type Y else type N?(Y/N):");
				scanf("%s",&ans);
				if(ans=='Y'){
					return fun(); //recursive call
				}
				else{
					exit(0);
				}		
				break;
		case 2: printf("Please enter the amount to withdraw:");
				scanf("%f",&amt);
				withdraw(); //calling withdraw function
				printf("Do you want to perform another operation type Y else type N?(Y/N):");
				scanf("%s",&ans);
				if(ans=='Y'){
					return fun(); //recursive call
				}
				else{
					exit(0);
				}		
				break;
		case 3: printf("Please enter the amount you want deposit:");
				scanf("%f",&dep);
				deposit(); // calling deposit function
				printf("Do you want to perform another operation type Y else type N?(Y/N):");
				scanf("%s",&ans);
				if(ans=='Y'){
					return fun(); //recursive call
				}
				else{
					exit(0);
				}	
				break;
		case 4: exit(0);		
		default:printf("Please enter a valid option.Thank You\n");
				break;
		}
	return 0;
}
void withdraw(){
	rem = bal-amt; //calculating the remaining balance
	if(rem>=0)
		{	
			bal=rem; //assigning remaining balannce
			printf("Please collect your cash\n");
			printf("Your available balance is %.2f\n",rem);
		}
		else{
			printf("Insufficent Funds\n");
		}	
}
void deposit()
{
	bal=bal+dep; //adding to the balance
	printf("Thank you for depositing, your new balance is:%.2f\n",bal);
}
