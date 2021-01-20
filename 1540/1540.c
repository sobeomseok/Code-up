#include <stdio.h>

int n;



int f(int n){
    printf("%s", n==0?"zero":"non zero");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}