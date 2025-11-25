#include <stdio.h>
int main()
{
    int arr[5];
    printf("enter a numbers:");
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
           
              printf("%d is a even number", arr[i]);
        }
      
     else
    {
        printf("%d is odd number", arr[i]);
    }
}
}