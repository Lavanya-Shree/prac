/*Write a C program to find the factorial of a number by recursion.
#include <stdio.h>
int fact(int n);
int main(){
	int n,result;
	printf("\nEnter the number:");
	scanf("%d",&n);
	result=fact(n);
	printf("\n%d! = %d",n,result);
}
int fact(int n){
	int p;
	if(n>0){
		p=n*fact(n-1);
		return p;
	}
	else{
		return 1;
	}
}
//Write a program to find the power of a number using recursion.
#include<stdio.h>
int power(int n, int r);
int main(){
	int n,r;
	printf("Enter the base:");
	scanf("%d",&n);
	printf("\nEnter the power:");
	scanf("%d",&r);
	int result=power(n,r);
	printf("\n%d to the power %d = %d",n,r,result);
}
int power(int n, int r){
	if(r!=0)
		return n*power(n,(r-1));
	else
		return 1;
}
//Indirect recursion example.
#include<stdio.h>
void odd(int n){
	if(n<=10){
		printf("%d ",n+1);
		n++;
		even(n);
	}
	return;
}
void even(int n){
	if(n<=10){
		printf("%d ",n-1);
		n++;
		odd(n);
	}
	return;
}
void main(){
	int n=1;
	odd(n);
}
//Write a C program to find the product of two numbers.
#include<stdio.h>
int product(int n1, int n2);
int main(){
	int n1,n2;
	printf("\nEnter the first number:");
	scanf("%d",&n1);
	printf("Enter the second number:");
	scanf("%d",&n2);
	int result= product(n1,n2);
	printf("The product is: %d",result);
}
int product(int n1, int n2){
	if(n2!=0){
		return n1+product(n1, (n2-1));
	}
	else
		return 0;
}
//WAP to find out whether the number input is a prime or not.
#include<stdio.h>
int checkprime(int n, int i);
int main(){
	int n,i=2;
	printf("\nEnter the number to be checked:");
	scanf("%d",&n);
	int result = checkprime(n,i);
	if(result==1)
		printf("%d is not a prime number!",n);
	else
		printf("%d is a prime number!",n);
}
int checkprime(int n, int i){
	if(i<=n/2){
		if(n%i==0){
			return 1;
		}
		else{
			return checkprime(n,i+1);
		}
	}
}
//WAP to reverse the array.
#include<stdio.h>
int main(){
	int n;
	printf("Enter the length of array:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter element%d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("The original array is:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nThe reversed array is:\n");
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
//WAP to  counter cyclically rotate the array by one.
#include<stdio.h>
void main(){
	int a[]={1,2,3,4,5};
	printf("\nThe original array is:\n");
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\nThe rotated array is:\n");
	int t[1];
	t[0]=a[0];
	for(int i=0;i<5;i++){
		if(i==4)
			a[4]=t[0];
		else
			a[i]=a[i+1];
		printf("%d ",a[i]);
	}
}
//WAP to cyclically rotate the array by one.
#include<stdio.h>
void main(){
	int a[]={1,2,3,4,5};
	printf("\nThe original array is:\n");
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\nThe rotated array is:\n");
	int t;
	t=a[4];
	for(int i=4;i>=0;i--){
		if(i==0)
			a[0]=t;
		else
			a[i]=a[i-1];
	}
	for(int i=0;i<5;i++){
	    printf("%d ",a[i]);
	}
}
//Write a program to find duplicates in an array.
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The duplicates in the array are:\n");
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				printf("%d ",a[i]);
			}
		}
	}
}
//Write a program to find the first repeating element in an array of integers.
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		int flag;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				flag=1;
				printf("The first duplicate element in the array is:%d",a[i]);
				break;
			}
		}
		if(flag==1)
			break;
	}
}
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int flag;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j])
				break;
			else{
				printf("The first non repeating element is:%d",a[i]);
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
}
//Write a C program to swap two Strings.
#include<stdio.h>
#include<string.h>
int main(){
	char s1[50], s2[50], t[50];
	printf("Enter the first string: ");
	scanf("%s",s1);
	printf("Enter the second string: ");
	scanf("%s",s2);
	printf("The strings before swaping: %s, %s\n",s1,s2);
	strcpy(t, s1);
	strcpy(s1, s2);
	strcpy(s2, t);
	printf("The strings after swaping: %s, %s",s1,s2);
}
//Write a C Program to Check if a Given String is Palindrome or not
#include<stdio.h>
#include<string.h>
int main(){
	int n,flag=0;
	printf("\nEnter the size of the string.");
	scanf("%d",&n);
	char str[n],result[n];
	printf("Enter the string to be checked: ");
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0; i<len; i++){
		if(str[i]!=str[len-(i+1)]){
			flag=1;
			break;
		}
	}if(flag==1)
		printf("The string is not a palindrome string!");
	else
		printf("The string is a palindrome string!");
}
//Write a C Program for Print all the duplicates in the
input string.
#include<stdio.h>
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of string: ");
	scanf("%d",&n);
	char str[n];
	printf("Enter the string: ");
	scanf("%s",str);
	printf("The duplicate characters in the string %s is: ",str);
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(str[i]==str[j]){
				printf("%c ",str[i]);
			}
		}
	}
}
#include<stdio.h>
#include<string.h>
int main(){
	int n1, n2,k=0,flag=0;
	printf("Enter the size of the first string: ");
	scanf("%d",&n1);
	printf("Enter the size of the second string: ");
	scanf("%d",&n2);
	char str1[n1],str2[n2], temp[n1];
	printf("Enter the first string: ");
	scanf("%s",str1);
	printf("Enter the second string: ");
	scanf("%s",str2);
	for(int i=0;i<strlen(str1);i++){
		for(int j=0;j<strlen(str2);j++){
			if(str1[i]==str2[j])
				flag=1;
		}
		if(flag==0){
			temp[k]=str1[i];
			k++;
		}
		flag=0;
	}
	printf("The first string after removing the duplicates from the second string: %s",temp);
}
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 
int main(){
    char str[100], reverse[100];
    int len, i, index, wordStart, wordEnd;
    printf("Enter any string:");
    gets(str);
    len = strlen(str);
    index = 0;
    wordStart = len - 1;
    wordEnd = len - 1;
    while(wordStart > 0)
    {
        if(str[wordStart] == ' ')
        {
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];
                i++; index++;
            }
            reverse[index++] = ' ';
            wordEnd = wordStart - 1;
        }
        wordStart--;
    }
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }
    reverse[index] = '\0'; 
    printf("Original string %s\n", str);
    printf("Reverse ordered words \n%s", reverse);
    return 0;
}
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int areRotations(char *str1, char *str2)
{
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    char *temp;
    void *ptr;
    if (size1 != size2)
    return 0;
    temp = (char *)malloc(sizeof(char)*(size1*2 + 1));
    temp[0] = ' ';
    strcat(temp, str1);
    strcat(temp, str1);
    ptr = strstr(temp, str2);
    free(temp); 
    if (ptr != NULL)
    return 1;
    else return 0;}
int main()
{
    char str1[500],str2[500];
    printf("String 1:\n");
    gets(str1);
    printf("String 2:\n");
    gets(str2);
    if (areRotations(str1, str2))
    printf("Strings are rotations of each other");
    else
    printf("Strings are not rotations of each other");
    getchar();
    return 0;
}
#include<stdio.h>
#include<string.h>

void reverse(char *str)
{
    if (*str != '\0')
    {
      reverse(str+1);
      printf("%c", *str);
    }
}

int main()
{
    char s[100];
    printf("Enter a string\n");
    gets(s);
    reverse(s);
    return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("Enter a string\n");
    gets(s);
    int count =0;
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=i+1;j<strlen(s);j++)
        {
            if(s[i]==s[j])
                count++;
        }
        if(count==0)
        {
            printf("The first non repeating character is %c \n",s[i]);
            break;
        }
        count = 0;
    }
    return 0;
}*/
#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int l, int r)
{
    int i;
    if (l == r)
    printf("%s\n", a);
    else 
    {
        for (i = l; i <= r; i++)
        {
            swap((a+l), (a+i));
            permute(a, l+1, r);
            swap((a+l), (a+i));
        }
    } 
}
int main()
{
    char str[300];
    printf("Enter String:");
    gets(str);
    int n = strlen(str);
    printf("All Possible Permutations Are:\n");
    permute(str, 0, n-1);
    return 0;
}