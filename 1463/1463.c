#include <stdio.h>

int main(void){
    int n,i,j,s=1,a[101][101]={};
    
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=n; j>0; j--) a[j][i]=s++;
    }
    for(i=1; i<=n; i++){
    for(j=0; j<n; j++) printf("%d ", a[i][j]);
    printf("\n");
    }
    return 0;
}