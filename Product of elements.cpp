#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int i,j,product;
	int b[5];
	for(i=0;i<5;i++)
	{
		product=1;
		if(i==0)
		{
			for(j=1;j<5;j++)
			{
			product=product*a[j];
			}
		}
		else if(i==4)
		{
			for(j=3;j>=0;j--)
			{
				product=product*a[j];
			}
		}
		else
		{
			for(j=i-1;j>=0;j--)
			{
				product=product*a[j];
			}
			for(j=i+1;j<5;j++)
			{
				product=a[j]*product;
			}
		}
		b[i]=product;
	}
	for(i=0;i<5;i++)
		cout<<b[i]<<" ";
	return 0;
}
