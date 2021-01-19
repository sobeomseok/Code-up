#include <stdio.h>

long long f(int k){
    if(k<=2) return 1;
    return f(k-2)+f(k-1);
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%lld", f(n));
    
    return 0;
}