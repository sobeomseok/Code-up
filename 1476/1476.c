#include <stdio.h>

int main(void){
    int n,m,i,j,num,s=1,a[101][101]={};
    
    scanf("%d%d", &n,&m);
    for(num=1; num<=n+m; num++){
        for(i=1; i<=m; i++){
            for(j=1; j<=n; j++){
                if(i+j==num){
                    a[j][i]=s++;
                    break;
                }
            }
        }
    }
    
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    
    return 0;
}