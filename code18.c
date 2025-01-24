//fractorial number 
#include<stdio.h>
int main(){
    int n,i,f=1;
    printf("enter the no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    printf("fractorial  %d",f);
return 0;
}