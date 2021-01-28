#include <stdio.h>

int n, d[100010], k;




int f(int n){
    int count=0;
    for(int i=0; i<=100000; i++){
        if(d[i]==n){
            count=i;
            break;
        }
        else count=-1;
    }
    return count;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);
  printf("%d\n", f(k));
}