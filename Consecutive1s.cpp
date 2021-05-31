#include<iostream>
using namespace std;
int score(int a[], int size, int n)
{//n is index where 1 is to be inserted
cout<<"Start of function";
	int sum=1,i,j;
	if(n==0)
	{
	
		for(i=1;i<size;i++)
		{
			j=i;
			while(a[j+1]!=0)
			{
				sum=sum+a[i];
				j++;
			}
		}
	}
	/*else
	{
		
	}*/
	cout<<"end of function\n";
	return sum;
}
int main()
{
	int a[10]={0,1,0,1,1,1,0,0,0,1};
	//slice array in main and pass them into function instead of doing everything in function
	cout<<"start\n";
	int ans=score(a,10,0);
	cout<<ans;
	cout<<"end\n";
	return 0;
}
