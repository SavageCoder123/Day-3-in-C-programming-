//ARMSTRONG number 
#include<stdio.h>
int main(){
    int r,n,s=0,count;
    printf("enter the no: ");
    scanf("%d",&n);
    int c=n;
    while(n>0){
        r=n%10;
        s=(r*r*r)+10;
        n=n/10;
    }
    if(c==s){
    printf("ARMSTRONG");
    }
    else{
        printf("ARMSTRONG");
    }
return 0;
}