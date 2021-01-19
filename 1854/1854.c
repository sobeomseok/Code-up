#include <stdio.h>

int f();

int main(void){
    long long n;
    scanf("%lld", &n);
    printf("%d", f(n));
    
    return 0;
}

int f(long long int n){
    int t=n%10;
    if(n<=0) return t;
    return t+f((long long int)(n/10));
}