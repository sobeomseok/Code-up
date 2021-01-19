#include <stdio.h>

int f();

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    
    return 0;
}

int f(int n){
    if(n<=1) return 1;
    return f(n-1)+n;
}