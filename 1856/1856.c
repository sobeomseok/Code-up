#include stdio.h

int f(int n){
    if(n==1) return 1;
    else if(n==2) return 1+f(1);
    else if(n==3) return 1+f(1)+f(2);
    else return f(n-3)+f(n-2)+f(n-1);
}

int main(void){
    int n;
    scanf(%d,&n);
    printf(%d,f(n));
    
    return 0;
}