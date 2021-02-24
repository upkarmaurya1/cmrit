#include <stdio.h>


int main()
{
    int arr[100];
    int size, i, a, pos;

  
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &a);

    
    pos = 0; 
    
    for(i=0; i<size; i++)
    {
       
        if(arr[i] == a)
        {
            pos = 1;
            break;
        }
    }

    if(pos == 1)
    {
        printf("\n%d is located at position %d", a, i + 1);
    }
    else
    {
        printf("\n%d is not located in the array", a);
    }

    return 0;
}