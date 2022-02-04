#include<stdio.h>
typedef struct Complex
{
  float real,imaginary;
}Complex;
int get_n()
{
  int n;
  scanf("%d",&n);
  return n;
}
Complex input_complex(int i)
{
  Complex c[i];
  c[i].real=i+i;
  c[i].imaginary=(i+i)+1;
  return c[i];
}
Complex add_n_complex(int n,Complex c[n])
{
  int i;
  Complex sum;
  for(i=0;i<n;i++)
  {
  sum.real=sum.real+c[i].real;
  sum.imaginary=sum.imaginary+c[i].imaginary;
  }
  return sum;
}
void output(int n,Complex c[n],Complex result)
{
  int i;
  for(i=1;i<n;i++)
  printf("%f+%fi+\n",c[i].real,c[i].imaginary);
  printf("%f+%fi is \n%f+%fi",c[n].real,c[n].imaginary,result.real,result.imaginary);
}
int main()
{
  int n,i;
  Complex result;
  n=get_n();
  Complex a[n];
  for(i=n;i>0;i--)
  a[i]=input_complex(i);
  result=add_n_complex(n,a);
  output(n,a,result);
  return 0;
}