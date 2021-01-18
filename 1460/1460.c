#include <stdio.h>

int main(void){
    int n,a[101][101]={},s=1;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) a[i][j]=s++;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    
    return 0;
}