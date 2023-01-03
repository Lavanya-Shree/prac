/*#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int s,a,b;
    printf("enter numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    //sump(a,b);
    s=retSum(a,b);
    printf("\n %d",s);
}
/*void sump(int a, int b){
    int sum= a+b;
    printf("sump fn. %d",sum);
}
int retSum(int a, int b){
    int rs= a+b;
    printf("\nthis is return fn");
    return rs;
}
#include<stdio.h>
void main(){
    int i=10,j=20;
    printf("%d %d\n",i,j);
    i = i+j;
    j = i-j;
    i = i-j;
    printf("%d %d",i,j);
}*/
//Write a C program to accept n numbers, store them in
//array and find out the smallest number using pointer.
#include<stdio.h>
void Min(int a[],int n, int *min){
    *min = a[0];
    for(int i = 1;i<n;i++){
        if(a[i]<*min){
            *min = a[i];
        }
    }
}
int main(){
    int n;
    printf("How many numbers do you want to store? ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min;
    Min(a,n,&min);
    printf("The minimum element in the array is: %d",min);
}
