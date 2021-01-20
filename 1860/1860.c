#include <stdio.h>

int n;

void f(int k){
    if(k<=0) return;
    f(k-1);
    g(k);
    printf("\n");
}

void g(int k){
    if(k<=0) return;
    g(k-1);
    printf("%d ", k);
}

int main(void){
    scanf("%d",&n);
    f(n);
    
    return 0;
}