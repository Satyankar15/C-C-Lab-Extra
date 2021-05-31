#include<iostream>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
bool evenateven(int a[], int n)
{
	int i;
	for(i=1;i<n;i=i+2)
	{
		if(a[i]%2==0)
			return 1;
	}
	return 0;
}
bool oddatodd(int a[], int n)
{
	int i,flag=0;
	for(i=0;i<n;i=i+2)
	{;
		if(a[i]%2!=0)
			flag=1;
	}
	return flag;
}
bool flip(bool x)
{
	if(x==0)
		return 1;
	else
		return 0;
}
int main()
{
	int num,n,t,N;
	int a[N],i,coumt=0,NUM;
	bool turn=0,winner;
	cin>>t;
	int digits[t];
	int number[t];
	for(int j=0;j<t;j++)
	{
		cin>>N;
		cin>>NUM;
		digits[t]=N;
		number[t]=NUM;
	}
	while(t--)
	{
		n=N;
		num=NUM;
		for(i=n-1;i>=0;i--)
		{
			a[i]=num%10;
			num/=10;
		}
		rep(i,n)
		{
				if(n==1)
				{
					if(a[0]%2==0)
						winner=1;
					else
						winner=0;
				}
				else
				{
					if(n%2!=0)	//Number of digits is odd and >1
					{
						if(oddatodd(a,n))
						{
							winner=0;
							break;
						}
						else
						{
							winner=1;
							break;
						}
					}
					else
					{
						if(evenateven(a,n))
						{
							winner=1;
							break;
						}
						else // Even at even
						{
							winner=0;
							break;
						}
					}
				}
		}
	cout<<endl;
	if(winner==1)
		cout<<"2";
	else
		cout<<"1";
	cout<<endl;
		
	}
return 0;
}
