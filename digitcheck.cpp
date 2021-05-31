#include<iostream>
#include<cmath>
using namespace std;
int samecheck(int n[], int size)
{
	int sample=n[0];
	int num[size],i;
	for(i=0;i<size;i++)
		num[i]=n[i];
	int digs=size;
	for(i=1;i<size;i++)
	{
		if(num[i]!=sample)
			return 0;
	}
	return 1;
}
int main()
{
	int num;
	cin>>num;
	int i;
	int digs=floor(log10(num))+1;
	int flag=0;
	int n=num, lsb=num%10; 
	int msb=pow(10,digs-1);
	int arr[digs];
	for(i=digs-1;i>=0;i--)
	{
		arr[i]=n%10;
		n=n/10;
	}
	for(i=0;i<digs-1;i++)
	{
		if((arr[i]!=lsb || arr[i]!=msb))
		{	int temp=arr[i];
			arr[i]=lsb;
			if(samecheck(arr,digs))
			{
				flag=1;
				break;
			}
			else
				arr[i]=temp;
		}
	}
	if(flag==1)
		cout<<"Possible";
	else
		cout<<"Not possible";
	return 0;
}
