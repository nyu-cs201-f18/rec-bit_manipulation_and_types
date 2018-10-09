//source: http://itsitrc.blogspot.com/2013/09/c-program-to-find-floating-point-ieee.html
//Program to find the IEEE floating point representation - Uses the concept of a union in C

#include <stdio.h>
int binary(int n, int i)
{
    int k;
    for (i--; i >= 0; i--)
   {
      k = n >> i;
      if (k & 1)
          printf("1");
      else
         printf("0");
    }
}

typedef union
{
  float f;
  struct
  {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
   } field;
} myfloat;

int main()
{
  myfloat var;
  printf("Enter any float number: ");
  scanf("%f",&var.f);
  printf("%d ",var.field.sign);
  binary(var.field.exponent, 8);
  printf(" ");
  binary(var.field.mantissa, 23);
  printf("\n");
  return 0;
}
