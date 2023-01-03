#include <stdio.h>
void rotate(int arr[], int size)
{
int x = arr[size-1], i;
for (i = size-1; i > 0; i--)
  arr[i] = arr[i-1];
arr[0] = x;
}
int main()
{
  int arr[100] ,size, i;
  printf("Enter the size of the array \n");
  scanf("%d",&size);

  printf("Given array is\n");
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);

  rotate(arr, size);

  printf("\nRotated array is\n");
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);

  return 0;
}