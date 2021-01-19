#include <stdio.h>

int main(void){
    int n,m,i,j,s=1,a[101][101]={};
    
    scanf("%d%d", &n,&m);
    for(i=m; i>0; i--){
        for(j=n; j>0; j--) a[j][i]=s++;
    }
    
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    
    return 0;
}