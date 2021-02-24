#include<stdio.h>
#include<string.h>
int main()
{
   char str[50],rev[50];
   int n;
   printf("Enter the Strings:\n");
   
   gets(str);
   n=strlen(str);
   int i=0;


   for(i;n>=0;i++)
   {
   rev[i]=str[n-1];
   n--;
   }
   rev[i]='0';
   printf("The reversed string is %s",rev);
   
}