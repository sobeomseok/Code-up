#include <stdio.h>

int n;




long long int f(int n){
    long long int sum=1;
    for(int i=1; i<=n; i++) sum *=i;
    return sum;
}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}