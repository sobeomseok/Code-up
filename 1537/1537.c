#include <stdio.h>

int n;

void f(int n){
    if(n==1) printf("hello");
    else printf("world");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}