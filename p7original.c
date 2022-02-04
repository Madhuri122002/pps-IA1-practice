
#include<stdio.h>
typedef struct Complex
{
float real,img;
}Complex;
Complex input_complex()
{
  Complex n1;
  printf("enter the real and imaginary parts of complex number\n");
  scanf("%f %f",&n1.real,&n1.img);
  return n1;
}
Complex add(Complex a,Complex b)
{
  Complex result;
  result.real=a.real+b.real;
  result.img=a.img+b.img;
  return result;
}
void output(Complex a, Complex b,Complex c)
{
  printf("the sum of %f + %f i + %f + %f i is %f + %f i",a.real,a.img,b.real,b.img,c.real,c.img);
}
int main()
{
  Complex n1,n2,result;
  n1=input_complex();
  n2=input_complex();
  result=add(n1,n2);
  output(n1,n2,result);
  return 0;
}