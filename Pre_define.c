#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	
	char s1[10]="Hello";
	char s2[10]="World";
	char s3[10];
	int result;
	result=strcmp(s1,s2);
	printf("%d\n",result);
	strcpy(s3,s1);
	puts(s3);
	printf("%s\n",strrev(s2));
	printf("%d\n",strlen(s1));
	printf("%s\n",strupr(s1));
	printf("%s\n",strlwr(s3));
	result=pow(2,3);
	printf("%d\n",result);
	result=sqrt(4);
	printf("%d\n",result);
	float val=1.6;
	printf("value = %.1f\n", ceil(val));
	printf("value = %.1f\n", floor(val));
	printf("%d\n",rand());
	return 0;
}
