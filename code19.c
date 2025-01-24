//prime number 
#include<stdio.h>
int main(){
    int n,i,f=0;
    printf("enter the no: ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
        f=1;}
    }
    if(f==0){
        printf("prime number");
    }
    else{
        printf("not prime");
    }
return 0;
}