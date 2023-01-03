/*#include <stdio.h>
int findprime(int n);
int main()
{
    int n1, n2, i, f;
    printf("Enter the numbers:");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    for(i=n1+1;i<=n2;i++)
        {
        f=findprime(i);
        if(f==1)
            printf("%d  ",i);
        }
}
int findprime(int n)
{
    int flag=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            flag=0;
    } 
    return flag;
}*/
//Write a program to find the Kth largest and Kth smallest number in an array.
#include <stdio.h>
int main(void) 
{
    int arr[100], i, j, size;
   
    printf("Enter the size of an array \n");
    scanf("%d",&size);
    printf("Enter the elements in an array\n");
    for( i = 0; i < size; i++) 
    {
       scanf("%d", &arr[i]);
    }
  
    for(i = 0; i < size; i++)
    {
        for(j=i+1; j < size; j++)
        {
   
            if(arr[i] == arr[j])
            {
                printf("Duplicate element in an array is %d \n",arr[i]);
                break;
            }
        }
    }
    return 0;
}