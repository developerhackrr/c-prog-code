#include<stdio.h>
 
int main()
{
    int arr[20],i,elementToBeSearched,n;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("\nEnter element to search:");
    scanf("%d",&elementToBeSearched);
    
    for(i=0;i<n;i++)
        if(arr[i]==elementToBeSearched)
            break;
    
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found in the array");
 
    return 0;
}
