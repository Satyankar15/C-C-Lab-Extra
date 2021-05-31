#include <stdio.h>

void selectionSort(int array[], int size) 
{
  for (int i = 0; i < size - 1; i++) {
    int min_idx = i;
    for (int j = i + 1; j < size; j++) {
    	
      if (array[j] < array[min_idx])
        min_idx = j;
    }

    int temp = array[min_idx];
  	array[min_idx] = array[i];
  	array[i] = temp;
  }
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
  	selectionSort(arr, n);
  	for (int i = 0; i < n; i++)
    	printf("%d  ", arr[i]);
	return 0;
}
