#include<stdio.h>
int main(){
	float n1,n2;
	char op;
	printf("Enter the first number:");
	scanf("%f",&n1);
	printf("Enter operation(+,-,*,/):");
	scanf(" %c",&op);
	printf("Enter the second number:");
	scanf("%f",&n2);
	switch (op)
	{
		case '+':
    		printf("\nSum of numbers:%f",n1+n2);
		break;
		case '-':
    		printf("\nDifference of numbers:%f",n1-n2);
		break;
		case '*':
    		printf("\nProduct of numbers:%f",n1*n2);
		break;
		case '/':
    		printf("\nQuotient of numbers:%f",n1/n2);
		break;            
		default:
    		printf("\nWrong operation!");
    	break;
	}
	return 0;
}