#include <stdio.h>
int main()
{
  float length,breadth,area;
  printf("Enter area:\n");
  scanf("%f%f",&length,&breadth);
  area=length*breadth;
  printf("area=%f",area);
  return 0;
}