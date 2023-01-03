#include <stdio.h>
int x;

int main()
{
    printf("\nDemonstrating register class\n");
    register char b = 'G';
    printf("Value of the variable 'b' declared as register: %d\n",b);
    return 0;
}