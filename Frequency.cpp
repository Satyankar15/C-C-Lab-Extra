#include<iostream>

using namespace std;
int main()
{
	int n,j,num=0;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter "<<i+1<<" element"<<endl;
		cin>>a[i];
	}
	int freq=n/2;
	int count=0;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
				count++;
		}
		if(count>freq)
		{
			if(num!=a[i])
			{
				num=a[i];
				cout<<"\nResult = "<<a[i];
			}
		}
			
	}
	cout<<"\nEnd";
	return 0;
}
