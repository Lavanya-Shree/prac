#include <iostream>
#include<stdio.h>
using namespace std;
void swap(int m,int l);
int main()
{
    int n;
    cin>>n;
    int a[n],i,j,len=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        len++;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    swap(a[1],a[2]);
   /* for(i=0;i<n;i+=2){
        if(i+1<n){
        swap(a[i],a[i+1]);}
    }*/
     for(i=0;i<n;i++){
        cout<<a[i]<<" ";}
    cout<<endl;
    
}