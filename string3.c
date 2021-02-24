#include<stdio.h>
#include<string.h>
int main()
{
   char str[50],a;
   int count,n;

   printf("Enter the Strings:\n");
   gets(str);
   
   printf("Enter the character hwose occurence needs to be counted");
   scanf("%c",&a);
  
   n=strlen(str);
   count=0;

   for(int i=0;i<=n-1;i++)
   {
      if(str[i]==a)
      count++;
   }

   printf("count=%d",count);

   return 0;
}