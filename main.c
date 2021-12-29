#include <stdio.h>

int main(void)
 {
  int a,b,c;
  printf("enter the value if a=");
  scanf("%d",&a);
  printf("enter the vallue of b=");
  scanf("%d",&b);
  printf("enter the value of c=");
  scanf("%d",&c);

  if(a+b+c!=180)
  printf("invalid angles \n");

  else if (a==b && b==c)
  printf("equlateral triangle\n");

  else if (a==b || b==c || c==a)
  printf("isoceles triangle\n");

  else
  printf("scalen tringle\n");

  return 0;

  
}