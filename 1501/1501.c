#include <stdio.h>

int main(void){
    int n,i,j,t=1,a[51][51]={};
    
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            a[i][j]=t++;
        }
    }
    
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}