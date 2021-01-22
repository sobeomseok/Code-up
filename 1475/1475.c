#include <stdio.h>

int main(void){
    int n,m,i,j,s=1,k=1,a[101][101]={};
    
    scanf("%d%d", &n,&m);
    for(i=m; i>0; i--){
        if(k%2==1){
            for(j=1; j<=n; j++) a[j][i]=s++;
        }
        else{
            for(j=n; j>0; j--) a[j][i]=s++;
        }
        k++;
    }
    
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    
    return 0;
}