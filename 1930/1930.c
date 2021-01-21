#include <stdio.h>

long long int data[15][15] ={}; 
int i;

int ss(int n, int m) {
    if(n == 0) {
        return m;
    }
    if(data[n][m]>0) return data[n][m];
    for(int i=1; i<=m; i++){
        data[n][m]+=ss(n-1,i);
    }
    return data[n][m];
}

int main(void) {
    int a,b;
    while( scanf("%d %d", &a, &b) != EOF ) {
        printf("%d\n", ss(a,b));
    }
    return 0;
}