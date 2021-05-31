#include <stdio.h>

void insertionSort(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int key = array[i];
    int j = i - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
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
  	insertionSort(arr,n);
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
    return 0;
}
