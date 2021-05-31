#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		a[i]=sum;
		cout<<a[i]<<" ";
	}
	return 0;
}
