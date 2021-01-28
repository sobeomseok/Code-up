#include <stdio.h>

int n, m;
int min(int p, int q){
    return p>=q?q:p;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", min(n, m));
}