//total digit number 
#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter the no: ");
    scanf("%d",&n);
    int c=n;
    while(n>0){
        n=n/10;
        count++;
    }
    printf("total digit %d",count);
}