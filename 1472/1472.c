#include <stdio.h>

int main(void){
    int n,m,i,j,s=1,k=1,a[101][101]={};
    
    scanf("%d%d", &n,&m);
    for(i=n; i>0; i--){
        if(k%2==1){
            for(j=m; j>0; j--) a[i][j]=s++;
        }
        else{
            for(j=1; j<=m; j++) a[i][j]=s++;
        }
        k++;
    }
    
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    
    return 0;
}