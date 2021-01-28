#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}
int mid(int a, int b, int c){
    if(b<=a&&b>=c||b>=a&&b<=c) return b;
    else if(a<=b&&a>=c||a>=b&&a<=c) return a;
    else return c;
}
int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}