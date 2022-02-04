#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter a number\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float temp, sr;
  sr=n/2;
  temp=0;
  while(fabs(sr!=temp))
  {
    temp=sr;
    sr=(n/temp+temp)/2;
  }
  return sr;
}
void output(float n,float sqrt_result)
{
  printf("the squarreroot of %f is %f",n,sqrt_result);
}
int main()
{
  int n,sqrt_result;
  n=input();
  sqrt_result=my_sqrt(n);
  output(n,sqrt_result);
  return 0;
}