#include<stdio.h>
void swap(int A[],int a,int b)
{
	int temp=A[a];
	A[a]=A[b];
	A[b]=temp;
}
void Sort(int A[],int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(A[i]>A[j])
				swap(A,i,j);
		}
	}
}
int main()
{
	int arr[50];
	
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
}
