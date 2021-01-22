#include <stdio.h>

int n,r;

int f(int i,int k){
    if(k==1) return i;
    if(i==k) return 1;
    if(i<k) return 0;
    return f(i-1,k-1)+f(i-1,k);
}

int main(void){
    scanf("%d%d",&n,&r);
    printf("%d", f(n,r));
    
    return 0;
}