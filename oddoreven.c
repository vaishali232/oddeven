#include<stdio.h>
int main()
{
long long int n;
scanf("%lld",&n);
  if(n<0)
  {
    printf("invalid");
  }
  else
  {
printf(n%2==0?"Even":"Odd");
  }
}
