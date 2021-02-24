#include <stdio.h>
int main()
{
  int n1,n2;
  char op;
  printf("Enter operator:\n");
  scanf("%c",&op);
  printf("Enter two numbers\n");
  scanf("%d%d",&n1,&n2);

  switch(op)
  {
    case '-':
    printf("subtract=%d",n1-n2);
    break;
    case '+':
    printf("add=%d",n1+n2);
    break;
    case '*':
    printf("multiply=%d",n1*n2);
    break;
    case '/':
    printf("Divide=%d",n1/n2);
    break;
    default:
    printf("Invalid operator");


  }
  return 0;

}