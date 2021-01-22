#include <stdio.h>

int main(void){
    int n,m,i,j,a[101][101]={};
    
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++){
        for(j=1; j<=m; j++) scanf("%d",&a[i][j]);
    }
    
    for(i=0; i<n; i++){
        for(j=1; j<=m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}