/*#include<stdio.h>
#include <stdlib.h>
int main() {
int length=0;
FILE *filePtr;
filePtr = fopen("text.txt", "r");
if (filePtr == NULL) {
printf("Error in reading the file");
} else {
char ch = fgetc(filePtr);
printf("Context of text.txt: \n");
while (ch != EOF) {
printf("%c", ch);
ch = fgetc(filePtr);
}
}
fclose(filePtr);
}
#include<stdio.h>
#include<math.h>
int SumOfArmstrong(int a, int b);
int main(){
    int a,b;
    printf("Enter the lower limit: ");
    scanf("%d",&a);
    printf("Enter the upper limit: ");
    scanf("%d",&b);
    int sum = SumOfArmstrong(a,b);
    printf("\nSum of armstrong numbers between %d and %d = %d",a,b,sum);
}
int SumOfArmstrong(int a, int b){
    int sum=0,count=0,s=0;
    for(int i=a;i<b;i++){
        int temp1=i;
        while (temp1!=0){
            temp1=temp1/10;
            count++;
        }
        int temp2=i;
        while(temp2!=0){
            int rem=temp2%10;
            s+=pow(rem,count);
            temp2/=10;
        }
        if(s==i){
            sum+=i;
            printf("%d ",i);
        }
        count=0;
        s=0;
    }
    return sum;
}*/
//WAP to find whether the number entered is a power of 2 or not!
#include <stdio.h>
#include <stdbool.h>
bool isPowerOfTwo(int num){
    int flag = 1;
    for(int i=num;i>1;i/=2){
        if(i%2!=0){
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        return true;
    if (flag == 0)
        return false;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(isPowerOfTwo(n))
        printf("Yes");
    else
        printf("No");
}