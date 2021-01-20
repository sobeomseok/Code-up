#include <stdio.h>

int n;



int f(int n){
    if(n%2==0) printf("%s","even");
    else printf("%s","odd");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}