#include <stdio.h> 
int binarySearch(int arr[], int low, int high, int x) 
{ 
    if (high >= low) { 
        int mid = low + (high - low) / 2; 
   
        if (arr[mid] == x) 
            return mid; 
  
    
        if (arr[mid] > x) 
            return binarySearch(arr, low, mid - 1, x); 
  
        else
			return binarySearch(arr, mid + 1, high, x); 
    } 
  
    return -1; 
} 
  
int main() 
{ 
    int arr[50]; 
    int n,x;
    printf("Enter number of elements ");
    scanf("%d",&n);
    printf("Enter elements ");
    for(int i=0;i<n;i++)
    	scanf("%d",&arr[i]);
    printf("Enter element to be found ");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x); 
    if(result == -1)  
		printf("Element is not present in array") ;
    else
		printf("Element is present at index %d", result); 
    return 0; 
} 
