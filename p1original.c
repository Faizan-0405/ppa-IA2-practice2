#include<stdio.h>
void input(float *base ,float *height)
{
  printf("enter the height and base\n");
  scanf("%f%f",base,height);
}
void find_area(float base ,float height,float *area)
{
  *area=(base*height)/2;
}
void output(float base,float height,float area)
{
  printf("the area of trinagle with %f and height %f is %f",base,height,area);
}
int main()
{
  float a,b,c;
  input(&a,&b);
  find_area(a,b,&c);
  output(a,b,c);
  //return 0;
}
