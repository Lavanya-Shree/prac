/*#include<stdio.h>
int main()
{
double P,R,T;
printf("Enter the PRINCIPLE AMOUNT:Rs.");
scanf("%lf",&P);
printf("Enter the Rate of Interest:");
scanf("%lf",&R);
printf("Enter the Time period:");
scanf("%lf",&T);
printf("Value of Simple Interest = %lf",(P*R*T)/100);
return 0;
}
void display(){
    int value=main();
    printf("%d",value);
}
#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
    printf("Before swaping the numbers are:%d,%d",a,b);
    temp=b;
	b=a;
	a=temp;
	printf("\nAfter swaping the numbers are:%d,%d",a,b);
}
#include <stdio.h>

int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter n%d: ", i);
      scanf("%lf", &number);

      // if the user enters a negative number, break the loop
      if (number < 0.0) {
         break;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   return 0;
}
#include <stdio.h>
int main(){
    int i,x=20,z=30,f=23;
    for(i=0;i<200;i++,f++,z++);
    {
        x++;
    }
    pritnf("%d %d",x,i);
}*/
# define VAL(x,y) x*y
void main ( )
{
int p = VAL (2+3, 3+5);
printf (“%d”, p);
}