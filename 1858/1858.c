#include <stdio.h>

int f(int i, int k){
    if(i==k) return 1;
    if(k==1) return 1;
    if(i<k) return NULL;
    return f(i-1,k-1)+f(i-1,k);
}


int main(void){
    int n,r;
    scanf("%d%d", &n,&r);
    printf("%d",f(n,r));
    return 0;
}