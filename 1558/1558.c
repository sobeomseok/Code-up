#include <stdio.h>

long long int n;

long long int f(long long int k)
{
    long long int t=0;
    while (n!=0){
        t=t*10+n%10;
        n=n/10;
    }
    return t;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}