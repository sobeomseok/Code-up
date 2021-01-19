#include <stdio.h>

void f();

int main(void){
    int n;
    scanf("%d", &n);
    f(n);
    
    return 0;
}

void f(int n){
    if(n<=0) return;
    f(n-1);
    printf("%d ", n);
}