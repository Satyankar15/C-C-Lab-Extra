#include<iostream>
using namespace std;
int main()
{
	int i,j,n,a[20];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	int max=0,diff;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			diff=a[j]-a[i];
			cout<<a[j]<<"-"<<a[i]<<"="<<diff<<"\n";
			if(diff>max)
			{
				max=diff;
				cout<<"Current max is "<<max<<endl;	
			}
		}
	}
	cout<<"\n"<<max;
	return 0;
}
