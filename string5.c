#include<stdio.h>
#include<string.h>
int main()
{
   char str[50],a,sub[50];
   int count,n,j,i;

   printf("Enter the String:\n");
   gets(str);
   printf("Enter the substring:\n");
   gets(sub);
   n=strlen(sub);
   for (i = 0, j = 0; str[i] != '\0' && sub[j] != '\0'; i++)
    {
        if (str[i] == sub[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == n)
    {
        printf("Substring found at position %d", i - j + 1);
    }
    else
    {
        printf("Substring not found");
    }
    

    return 0;
}