#include<stdio.h>

void sort(int size,int *p);
int main()
{
    int arr[100],size,i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    sort(size,arr);
    return 0;
}

void sort(int size,int *p)
{
    int i,j,k;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(p+j)<*(p+i))
            {
                k=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=k;
            }
        }
    }
    printf("array after sorting is \n");
    for(i=0;i<size;i++)
    printf("%d ",*(p+i));
}