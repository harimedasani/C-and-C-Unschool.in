#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int Rock=1,Paper=2,Scissor=3,i,choice;
	srand(time(NULL));
	printf("Enter your Choice for Rock=1,Paper=2,Scissor=3,Quit=4::");
	scanf("%d",&choice);
	switch(choice){
		case 1:printf("Player Choose Rock\n");
				break;
		case 2:printf("Player Choose Paper\n");
				break;
		case 3:printf("Player Choose Scissor\n");
				break;
		case 4:exit(0);
		default:printf("Enter the Valid One\n");
	}
	int computer=rand()%3+1;
		if(choice==1){
			if(computer==1){
				printf("Computer Choose :: Rock\n");
				printf("Result:Game Drawn\n");
			}
			if(computer==2){
				printf("Computer Choose: Paper\n");
				printf("Result:Computer Won\n");
			}
			if(computer==3){
				printf("Computer Choose: Scissor\n");
				printf("Result:Player Won\n");
			}
		}
		else if(choice==2){
			if(computer==1){
				printf("Computer Choose: Scissor\n");
				printf("Result:Computer Won\n");
			}
			if(computer==2){
				printf("Computer Choose::Paper\n");
				printf("Result:Game Drawn\n");
			}
			if(computer==3){
				printf("Computer Choose::Rock\n");
				printf("Result:Player Won\n");
			}
		}
		else if(choice==3){
			if(computer==1){
				printf("Computer Choose:Paper\n");
				printf("Result:Player Won\n");
			}
			if(computer==2){
				printf("Computer Choose: Rock\n");
				printf("Result:Computer Won\n");
			}
			if(computer==3){
				printf("Computer Choose: Scissor\n");
				printf("Result: Drawn\n");
			}
		}
	return 0;
}
