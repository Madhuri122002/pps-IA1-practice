#include<stdio.h>
int input_array_size()
{
  int n;
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
}
int sum_n_arrays(int n,int a[n])
{
  int i,sum;
  for(i=0;i<n;i++)
  sum+=a[i];
  return sum;
}
void out_put(int n,int a[n],int sum)
{
  int i;
  for(i=1;i<n-1;i++)
  printf("%d+",a[i]);
  printf("%d is %d",a[n-1],sum);
}
int main()
{
  int n,sum,i;
  printf("enter the size of the array\n");
  n=input_array_size();
  int a[n];
  printf("enter array elements\n");
  input_array(n,a);
  sum=sum_n_arrays(n, a);
  out_put(n,a,sum);
  return 0;
}