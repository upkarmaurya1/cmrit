#include <stdio.h>
#include <string.h>
int main()
{
 int i,n,l,h,mid;
 char a[50][50],key[20];

 printf("Enter the number of names to be added\n");
 scanf("%d",&n);

 printf("Enter the name in ascending order\n");
 for(i=0;i<=n-1;i++)
 {
 scanf("%s",a[i]);
 }

 printf("\n");
 printf("Enter the name to be searched\n");
 scanf("%s",key);
 l=0;

 h=n-1;

 while(l<=h)
 {
     mid=(l+h)/2;

    if (strcmp(key,a[mid])==0)
      {
        printf("Name found at the position %d\n",mid+1);
        return 0;;
      }

      else if(strcmp(key,a[mid])>0)
      {
        h=h;
        l=mid+1;
      }

       else
      {
        l=l;
        h=mid-1;
      }

 }
 printf("name not found\n");

 return 0;
 }