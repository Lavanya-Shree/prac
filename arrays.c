#include <stdio.h>
#include <math.h>
int main(){
    int M,N;
    printf("Enter M and N:");
    scanf("%d %d",&M,&N);
    if(N<=100 && M<N){
        int a[100];
        a[0]=5;
        int s,rem,count=1,flag=0;
        for(int i=1;i<N;i++){
            s = (pow(2,i))*M;
            rem = s%N;
            a[i]=rem;
            for(int j=0;j<i;j++){
                if(a[j]==a[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break; 
            count++;
        }
        printf("%d",count);
    }
}