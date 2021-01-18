#include <stdio.h>

int main(void){
    int n,i,j,s=1;
    int a[101][101]={};
    
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=n; j>0; j--) a[i][j]=s++;
    }
    
    for(i=0; i<n; i++){
        for(j=1; j<=n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}