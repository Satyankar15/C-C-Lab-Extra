#include<iostream>
#include<cmath>
using namespace std;
int zerocheck(int num)
{
	int dig,i,x;
	dig=floor(log10(num))+1;
	for(i=0;i<dig;i++)
	{
		x=num%10;
		if(x==0)
			return 0;
		else
			num=num/10;
	}
	return 1;
}
int main()
{
	int n;
	cout<<"Enter number"<<endl;
	cin>>n;
	if(zerocheck(n))
		cout<<"Number contains no 0"<<endl;
	else
		cout<<"Number containts 0";
}
