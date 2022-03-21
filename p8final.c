#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef _fraction Fraction;
int find_gcd(int a, int b)
{
  int t;
    while (b!=0)
      {
        t = b;
        b = a%b;
        a = t;
      }
    return a;
}
Fraction input_fraction()
{
 fraction f;
  printf("enter the nuemerator and denominator of the 
  fraction:");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
void input_in_fractions(int n, Fraction f[n])
{
  
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
  
}