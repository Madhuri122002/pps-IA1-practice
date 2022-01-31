#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the factorial\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int a[n],sum,i;
  for(i=0;i<n;i++)
  a[i]=i;
  for(i=0;i<n;i++)
  sum+=a[i];
  return sum;
}
void output(int n,int sum)
{
  int i;
  for(i=1;i<=n-1;i++)
  printf("%d+",i);
  printf("%d is %d",n,sum);
}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}