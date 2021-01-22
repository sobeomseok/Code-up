#include <stdio.h>

int n;



void f(int n){
    int i,j=0;
    for(i=2; i<=n; i++){
        if (n%i==0){
            j++;
        }
    }
    if(j==1){
        printf("prime");
    }
    else{
        printf("composite");
    }
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}