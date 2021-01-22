#include <stdio.h>

int n;



void f(int i){
    if(i<0) return printf("negative");
    else if(i==0) return printf("zero");
    else return printf("positive");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}