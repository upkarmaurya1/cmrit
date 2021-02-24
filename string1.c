#include<stdio.h>
#include<string.h>
int main()
{
   char s1[50],s2[50],s3[50];
   int l1,l2,l3;
   printf("Enter the Strings:\n");
   gets(s1);
   gets(s2);
   if(strcmp(s1,s2)==0)
   {
     printf("S1=%s\nS2=%s\n",s1,s2);
   }
   else
   {
   strcat(s1,s2);
   strcpy(s3,s1);
   l1=strlen(s1);
   l2=strlen(s2);
   l3=strlen(s3);
   printf("S1=%s\nLength=%d\n\nS2=%s\nLength=%d\n\nS3=%s\nLength=%d\n",s1,l1,s2,l2,s3,l3);

   
   }
}