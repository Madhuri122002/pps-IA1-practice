#include<stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return a;  
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c)
  return a;
  else
  if(b>c)
  return b;
  else
  if(c>b)
  return c;
}
void output(int a,int b,int c,int largest)
{
  printf("the largest among %d, %d and %d is %d",a,b,c,largest);
}
int main()
{
  int a,b,c,largest;
  printf("enter any three numbers\n");
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}