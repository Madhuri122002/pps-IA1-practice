#include<stdio.h>
float input()
{
  int n;
  printf("enter a number\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n);
{
  float temp, sr;
  sr=n/2;
  temp=sr;
  while(sr!=temp)
  {
    temp=sr;
    sr=(n/temp+temp)/2;
  }
  
