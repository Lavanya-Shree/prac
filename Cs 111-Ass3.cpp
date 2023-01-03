#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num,count,g[11];
    srand(time(NULL));
    num = rand() % 100 + 1;
    printf("Random number has been generated\n");
    printf("Enter a number\n");
    scanf("%d",&g[0]);
    for(count=1;count<=11;count++)
    {
        if(count==11)
        {
            if(num == g[count-1])
                    printf("You guessed the correct number\nYOU WON\n");
            else
                printf("YOU LOST\nThe number is %d\n",num);
        }
        else if(num>g[count-1])
            {
                printf("Enter a higher number\n");
                scanf("%d",&g[count]);
            }
        else if(num<g[count-1])
            {
            printf("Enter a lower number\n");
            scanf("%d",&g[count]);
            }
        else if(num=g[count-1])
           {
               printf("You entered the correct number\nYOU WON\n");
               break;
           } 
    }
    return 0;
}