#include <stdio.h>

int main(void){
    int n,i,j,t=0,a[101]={};
    
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&a[i]);
        t+=a[i];
        printf("%d ",t);
    }
    
    
    return 0;
}